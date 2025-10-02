#include <iostream>
using namespace std;
unsigned int boxVolume(int length = 1,
	int width = 1, int height = 1);
int main() {
	cout << "The default box volume is: " << boxVolume() << endl;	
	cout << "The box volume length|10 is: " << boxVolume(10) << endl;	
	cout << "The box volume length|10 width|5 is: " << boxVolume(10,5) << endl;	
	cout << "The box volume length|10 width|5 height|2 is: " << boxVolume(10,5,2) << endl;	
}
unsigned int boxVolume(int length,
	int width, int height) {
	return length*width*height;
}