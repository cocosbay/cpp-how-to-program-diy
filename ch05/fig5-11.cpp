#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int grade; unsigned int total{ 0 };
	unsigned int gradeCounter{ 0 };
	unsigned int aCount{ 0 };unsigned int bCount{ 0 };
	unsigned int cCount{ 0 };unsigned int dCount{ 0 };
	unsigned int fCount{ 0 };
	cout << "Enter the integer grades in the range 0 - 100.\n"
		<< "Type the end - of - file indicator to terminate input :\n"
		<< "On UNIX / Linux / Mac OS X type <Ctrl> d then press Enter\n"
		<< "On Windows type <Ctrl> z then press Enter" << endl;
	while (cin >> grade)	{
		total += grade;
		++gradeCounter;
		switch (grade / 10)		{
			case 10: case 9: aCount++; break;
			case 8: bCount++; break;
			case 7: cCount++; break;
			case 6: dCount++; break;
			default: fCount++; break;
		}
	}	
	cout << "Grade Report :\n";
	cout << "Total of the " << gradeCounter << " grades entered is " << total << endl;
	cout << fixed << setprecision(2);
	double average = static_cast<double>(total) / gradeCounter;
	cout << "Class average is " << average << endl;
	cout << "Number of students who received each grade :\n";
	cout << "A: " << aCount << endl;
	cout << "B: " << bCount << endl;
	cout << "C: " << cCount << endl;
	cout << "D: " << dCount << endl;
	cout << "F: " << fCount << endl;
}