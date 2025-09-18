#include <string>
class Student {
public:
	Student(std::string stuName,
		int stuAverage) : name(stuName) {
		setAverage(stuAverage);
	}
	std::string getName() const {
		return name;
	}
	int getAverage() const {
		return average;
	}
	void setName(std::string stuName) {
		name = stuName;
	}
	void setAverage(int stuAverage) {
		if (stuAverage > 0) {
			if (stuAverage <= 100)
				average = stuAverage;
		}
	}
	std::string getLetterGrade() {
		std::string letterGrade;
		if (average >= 90) letterGrade = "A";
		else if (average >= 80) letterGrade = "B";
		else if (average >= 70) letterGrade = "C";		
		else if (average >= 50) letterGrade = "D";		
		else letterGrade = "F";
		return letterGrade;
	}
private:
	std::string name;
	int average{ 0 };
};