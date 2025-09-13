#include <iostream>
using namespace std;

int main() {
	int num1{ 0 };
	int num2{ 0 };
	cout << "enter two integers to compare: ";
	cin >> num1 >> num2;
	if (num1 == num2){
		cout << num1 << " = " << num2 << endl;
	}
	if (num1 != num2) {
		cout << num1 << " != " << num2 << endl;
	}
	if (num1 < num2) {
		cout << num1 << " < " << num2 << endl;
	}
	if (num1 > num2) {
		cout << num1 << " > " << num2 << endl;
	}
	if (num1 <= num2) {
		cout << num1 << " <= " << num2 << endl;
	}
	if (num1 >= num2) {
		cout << num1 << " >= " << num2 << endl;
	}
}