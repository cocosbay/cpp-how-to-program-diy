#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int grade;
	int total{ 0 };
	unsigned int gradeCounter{ 0 };
	cout << "Enter grade or -1 to quit: ";
	cin >> grade;
	while (grade != -1)	{
		total += grade;
		gradeCounter++;
		cout << "Enter grade or -1 to quit: ";
		cin >> grade;
	}
	if (gradeCounter > 0) {
		cout << "\nTotal of the " << gradeCounter << " grades entered is " << total << endl;
		double average{ static_cast<double>(total) / gradeCounter };
		cout << setprecision(2) << fixed;
		cout << "Class average is " << average << endl;
	} else {
		cout << "No grade was entered" << endl;
	}
}
