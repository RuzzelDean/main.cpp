#include <iostream>
#include <string>
using namespace std;

int main() {
	string username, password;
	int attempts = 0;

	login:
	system("cls");
	
	cout << "Username: ";
	cin >> username;
	
	cout << "Password: ";
	cin >> password;
	
	attempts++;
	
	if (username=="admin" && password=="xyz") {
		cout << "\nHenlo Admin\n";

		return 0;
	}
	
	else if (attempts < 3) {
		cout << "\nIncorrect Username/Password";

		if (attempts == 1) {
			cout << "\nTwo remaining attempts\n\n";
		}
		
		else {
			cout << "\nOne remaining attempt\n\n";
		}
		
		system("pause");
		goto login;
	}
	
	else {
		cout <<"\nIncorrect Username/Password";
		cout <<"\nMaximum limit of attempts reached\n";
	}
	
	return 0;
}
