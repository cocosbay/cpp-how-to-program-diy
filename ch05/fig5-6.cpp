#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
	cout << setprecision(2) << fixed;
	double principal{1000.00};
	double rate{ .05 };
	cout << "Initial principal: " << principal << endl;
	cout << "Interest rate: " << rate << endl;
	cout << "Year" << setw(20) << "Amount of deposit" << endl;
	for (unsigned int year{ 1 }; year <= 10; year++) {
		double interest = principal * pow(1 + rate, year);
		cout << setw(4) << year << setw(20) << interest << endl;
	}
}