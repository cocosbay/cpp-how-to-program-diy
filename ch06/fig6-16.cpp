#include <iostream>
using namespace std;
inline double cube(const double side) {
	return side*side*side;
}
int main() {
	double side;
	cout << "Enter the side length of your code: ";
	cin >> side;
	cout << "Volume of cube with side " << side << " is "
		<< cube(side) << endl;
}