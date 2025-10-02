#include <iostream>
using namespace std;
unsigned int fibonacci(unsigned int);
int main() {
	for (unsigned int counter{ 0 }; counter <= 10; ++counter)
		cout << "fibonacci(" << counter << ") = " <<
		fibonacci(counter) << endl;
}
unsigned int fibonacci(unsigned int num){
	if ((num == 0) || (num == 1)) return num;
	else return fibonacci(num - 1) + fibonacci(num - 2);
}