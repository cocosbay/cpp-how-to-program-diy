#include <iostream>
#include <string>
#include "Account3.h"
using namespace std;
int main() {
	Account3 myAcc1{ "Mad Max", 100 };
	Account3 myAcc2{ "Fury Road", 150 };
	cout << "Account 1 " << myAcc1.getName() << " balance: " << myAcc1.getBalance() << endl;
	cout << "Account 2 " << myAcc2.getName() << " balance: " << myAcc2.getBalance() << endl;
	cout << "Updated!" << endl;
	myAcc1.deposit(50); myAcc2.deposit(100);
	cout << "Account 1 " << myAcc1.getName() << " balance: " << myAcc1.getBalance() << endl;
	cout << "Account 2 " << myAcc2.getName() << " balance: " << myAcc2.getBalance() << endl;
}