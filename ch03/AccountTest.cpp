#include <string>
#include <iostream>
#include "Account.h"
using namespace std;
int main() {
	Account myAcc;
	cout << "Enter account name: ";
	std::string theName;
	getline(cin, theName);
	myAcc.setName(theName);
	cout << "Account name is " << myAcc.getName() << endl;
}