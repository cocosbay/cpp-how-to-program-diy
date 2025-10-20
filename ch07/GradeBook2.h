#include <array>
#include <string> 
#include <iostream>
#include <iomanip> 
class GradeBook2 {
public:
   static const size_t students{10}; // number of students
   static const size_t tests{3}; // number of tests       
   GradeBook2(const std::string& name,
      std::array<std::array<int, tests>, students>& gradesArray)
      : courseName(name), grades(gradesArray) {
   }
   void setCourseName(const std::string& name) {
      courseName = name; // store the course name
   }
   const std::string& getCourseName() const {
      return courseName;
   }
   void displayMessage() const {
      std::cout << "Welcome to the grade book for\n" << getCourseName()
         << "!" << std::endl;
   }
   void processGrades() const {
      outputGrades(); // output grades array
      std::cout << "\nLowest grade in the grade book is " << getMinimum()
         << "\nHighest grade in the grade book is " << getMaximum()
         << std::endl;
      outputBarChart(); // display grade distribution chart 
   }
   int getMinimum() const {
      int lowGrade{100}; // assume lowest grade is 100
      for (auto const& student : grades) {
         for (auto const& grade : student) {
            if (grade < lowGrade) { // if grade is lower than lowGrade
               lowGrade = grade; // grade is new lowest grade
            }
         }
      }
      return lowGrade; // return lowest grade
   }
   int getMaximum() const {
      int highGrade{0}; // assume highest grade is 0
      for (auto const& student : grades) {
         for (auto const& grade : student) {
            if (grade > highGrade) { // if grade is higher than highGrade
               highGrade = grade; // grade is new highest grade
            }
         }
      }
      return highGrade; // return highest grade
   }
   double getAverage(const std::array<int, tests>& setOfGrades) const {
      int total{0}; // initialize total
      for (int grade : setOfGrades) {
         total += grade;
      }
      return static_cast<double>(total) / setOfGrades.size();
   }
   void outputBarChart() const {
      std::cout << "\nOverall grade distribution:" << std::endl;
      const size_t frequencySize{11};
      std::array<unsigned int, frequencySize> frequency{}; // init to 0s
      for (auto const& student : grades) {
         for (auto const& test : student) {
            ++frequency[test / 10];
         }
      }
      for (size_t count{0}; count < frequencySize; ++count) {
         if (0 == count) {
            std::cout << "  0-9: ";
         }
         else if (10 == count) {
            std::cout << "  100: ";
         }
         else {
            std::cout << count * 10 << "-" << (count * 10) + 9 << ": ";
         }
         for (unsigned int stars{0}; stars < frequency[count]; ++stars)
            std::cout << '*';
         std::cout << std::endl; // start a new line of output
      }
   }
   void outputGrades() const {
      std::cout << "\nThe grades are:\n\n";
      std::cout << "            "; // align column heads
      for (size_t test{0}; test < tests; ++test) {
         std::cout << "Test " << test + 1 << "  ";
      }
      std::cout << "Average" << std::endl; 
      for (size_t student{0}; student < grades.size(); ++student) {
         std::cout << "Student " << std::setw(2) << student + 1;
         for (size_t test{0}; test < grades[student].size(); ++test) {
            std::cout << std::setw(8) << grades[student][test];
         }
         double average{getAverage(grades[student])};
         std::cout << std::setw(9) << std::setprecision(2) << std::fixed
            << average << std::endl;
      }
   }
private:
   std::string courseName; // course name for this grade book
   std::array<std::array<int, tests>, students> grades; // 2D array
};