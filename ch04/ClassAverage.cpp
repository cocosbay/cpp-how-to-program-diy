#include <iostream>
using namespace std;
int main() {
	unsigned int grade{ 0 };
	int total{ 0 };
	unsigned int gradeCounter{ 1 };
	while (gradeCounter <= 10) {
		cout << "Enter grade: ";
		cin >> grade;
		total += grade;
		gradeCounter++;
	}
	int average{ total / 10 };
	cout << "\nTotal of 10 grades is " << total << endl;
	cout << "Class average is " << average << endl;
}