#include <iostream>
#include <iomanip>
#include <cstdlib> // rand prototype
using namespace std;
int main() {
	unsigned int frequency1{ 0 };	unsigned int frequency2{ 0 };
	unsigned int frequency3{ 0 };	unsigned int frequency4{ 0 };
	unsigned int frequency5{ 0 };	unsigned int frequency6{ 0 };
	int face;
	for (unsigned int count{ 1 }; count <= 1'000'000; ++count) {
		face = 1 + rand() % 6;
		switch (face) {
		case 1: ++frequency1; break;
		case 2: ++frequency2; break;
		case 3: ++frequency3; break;
		case 4: ++frequency4; break;
		case 5: ++frequency5; break;
		case 6: ++frequency6; break;
		default: cout << "you should not get here!"; break;
		}
	}
	cout << "Face" << setw(12) << "Frequency" << endl;
	cout << "1" << setw(12) << frequency1
		<< "\n2" << setw(12) << frequency2
		<< "\n3" << setw(12) << frequency3
		<< "\n4" << setw(12) << frequency4
		<< "\n5" << setw(12) << frequency5
		<< "\n6" << setw(12) << frequency6 << endl;
}