#include <iostream>
#include "maximum.h"
using namespace std;
int main() {
	cout << "Input 3 integer values: ";
	int foo1, foo2, foo3;
	cin >> foo1 >> foo2 >> foo3;
	cout << "The maximum integer value is: "
		<< maximum(foo1, foo2, foo3);
	cout << "\n\nInput 3 double values: ";
	double db1, db2, db3;
	cin >> db1 >> db2 >> db3;
	cout << "The maximum double value is: "
		<< maximum(db1, db2, db3);
	cout << "\n\nInput 3 chars: ";
	char ch1, ch2, ch3;
	cin >> ch1 >> ch2 >> ch3;
	cout << "The maximum character value is: "
		<< maximum(ch1, ch2, ch3) << endl;
}