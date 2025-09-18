#include <iostream>
using namespace std;
int main() {
	unsigned int c{ 5 };
	cout << "c before increment: " << c << endl;
	cout << "post increment: " << c++ << endl;
	cout << "c after increment: " << c << endl;
	c = 5; cout << endl;
	cout << "c before increment: " << c << endl;
	cout << "pre increment: " << ++c << endl;
	cout << "c after increment: " << c << endl;
}