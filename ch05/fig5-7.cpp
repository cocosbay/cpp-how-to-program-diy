#include <iostream>
#include <iomanip>
#include <string>
#include "DollarAmount.h"
using namespace std;
int main() {
	DollarAmount d1{ 12345 };
	DollarAmount d2{ 1576 };
	d1.add(d2);
	cout << "added d2: " << d2.toString() << " to d1: " <<
		d1.toString() << endl;
	d1.subtract(d2);
	cout << "subtracted d2: " << d2.toString() << " from d1: " <<
		d1.toString() << endl;
	cout << "enter integer interest rate and divisor\n"
		<< "2% => 2 100\n"
		<< "2.3% => 23 1000\n"
		<< "2.37% => 237 10000\n"
		<< "2.375% => 2375 100000\n>";
	int rate; int divisor;
	cin >> rate >> divisor;
	DollarAmount balance{ 100000 };
	cout << "\ninitial balance: " << balance.toString() << endl;
	cout << "\nyear" << setw(20) << "amount on deposit" << endl;
	for (unsigned int year{ 1 }; year <= 10; year++) {
		balance.addInterest(rate, divisor);
		cout << setw(4) << year << setw(20) << balance.toString() << endl;
	}
}