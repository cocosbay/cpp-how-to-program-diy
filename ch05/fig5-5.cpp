#include <iostream>
using namespace std;
int main() {
	int total{ 0 };

	for (unsigned int counter{ 2 }; counter <= 20; counter += 2)
		total += counter;
	cout << "Total = " << total << endl;
}