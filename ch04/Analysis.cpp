#include <iostream>
using namespace std;
int main() {
	int grade;
	unsigned int gradeCounter{ 0 };
	unsigned int passed{ 0 };
	unsigned int failed{ 0 };
	while (gradeCounter < 10) {
		cout << "Enter result (1 = pass, 2 = fail): ";
		cin >> grade;
		if (grade == 1) passed++;
		else failed++;
		gradeCounter++;
	}
	cout << "Passed: " << passed << " Failed: " << failed << endl;
	if (passed > 8) cout << "Merit point!" << endl;
}