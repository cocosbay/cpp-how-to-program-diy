#include <string>
#include <iostream>
#include "Account2.h"
using namespace std;
int main() {
	Account2 myAcc{ "Mad Max" };
	cout << "Initial name is " << myAcc.getName() << endl;
	cout << "Enter any name: ";
	std::string theName;
	getline(cin, theName);
	myAcc.setName(theName);
	cout << "\nUpdated name is " << myAcc.getName() << endl;
}