#include <iostream>
using namespace std;
int main() {
	int number1{ 0 };
	int number2{ 0 };
	int sum{ 0 };
	cout << "enter first integer ";
	cin >> number1;
	cout << "enter second integer ";
	cin >> number2;
	sum = number1 + number2;
	cout << "sum is: " << sum << endl;
}