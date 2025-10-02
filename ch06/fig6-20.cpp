#include <iostream>
using namespace std;
int square(int x) {
	cout << "Integer square of " << x << " is ";
	return x*x;
}
double square(double y) {
	cout << "Double square of " << y << " is ";
	return y*y;
}
int main() {
	cout << square(7) << endl;
	cout << square(7.5) << endl; 
}