#include <iostream>
#include <random>
#include <ctime>
#include <iomanip>
using namespace std;
int main() {
	default_random_engine ngin{ static_cast<unsigned int>(time(0)) };
	uniform_int_distribution<unsigned int> randomInt{ 1,6 };
	for (unsigned int counter{ 1 }; counter <= 10; ++counter) {
		cout << setw(10) << randomInt(ngin);
		if (counter % 5 == 0) cout << endl;
	}
}