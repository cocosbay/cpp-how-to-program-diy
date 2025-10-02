#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main() {
	int seed;
	cout << "Enter seed: ";
	cin >> seed;
	srand(seed);
	for (unsigned int counter{ 1 }; counter <= 10; ++counter) {
		cout << setw(12) << (1 + rand() % 6);
		if (counter % 5 == 0) cout << endl;
	}
}