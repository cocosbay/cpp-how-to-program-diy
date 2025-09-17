#include <iostream>
#include "Account2.h"
using namespace std;
int main() {
	Account myAcc1{ "Mad Max" };
	Account myAcc2{ "Fury Road" };
	cout << "my account 1 name is " << myAcc1.getName() << endl;
	cout << "my account 2 name is " << myAcc2.getName() << endl;
}