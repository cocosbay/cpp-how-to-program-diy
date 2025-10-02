#include <iostream>
using namespace std;
double num{ 10.5 };
int main() {
	int num{ 7 };
	cout << "Local int value of number = " << num
		<< "\nGlobal double value of number = " << ::num << endl;
}