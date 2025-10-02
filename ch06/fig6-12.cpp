#include <iostream>
using namespace std;
int square(int);
int main() {
	int x{ 10 };
	cout << x << " squared: " << square(x) << endl;
}
int square(int a) {
	return a * a;
}