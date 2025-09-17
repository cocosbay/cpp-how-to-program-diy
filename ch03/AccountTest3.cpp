#include <iostream>
#include "Account3.h"
using namespace std;
int main() {
	Account3 acc1{ "Mad Max",100 };
	Account3 acc2{ "Fury Road",150 };
	cout << acc1.getName() << " account have balance is: " << acc1.getBalance() << endl;
	cout << acc2.getName() << " account have balance is: " << acc2.getBalance() << endl;
	acc1.deposit(50);
	cout << acc1.getName() << " account have deposed 50$ " << endl;
	acc2.deposit(100);
	cout << acc2.getName() << " account have deposed 100$ " << endl;
	cout << acc1.getName() << " account have balance is: " << acc1.getBalance() << endl;
	cout << acc2.getName() << " account have balance is: " << acc2.getBalance() << endl;
}