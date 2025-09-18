#include <iostream>
#include "Student.h"
using namespace std;
int main() {
	Student acc1{ "Mad Max", 70 };
	Student acc2{ "Fury Road", 95 };
	cout << acc1.getName() << "'s letter grade with average: " << acc1.getAverage() << " is: " << acc1.getLetterGrade() << endl;
	cout << acc2.getName() << "'s letter grade with average: " << acc2.getAverage() << " is: " << acc2.getLetterGrade() << endl;
}