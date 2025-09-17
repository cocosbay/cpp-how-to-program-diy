#include <iostream>
#include <string>
#include "Account.h"
using namespace std;
int main() {
	Account myAcc;
	cout << "initial acc name: " << myAcc.getName();
	cout << "\nenter new name:";
	string theName;
	getline(cin, theName);
	myAcc.setName(theName);
	cout << "updated acc name: " << myAcc.getName() << endl;
}