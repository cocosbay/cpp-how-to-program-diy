#include <iostream>
using namespace std;
int squareByValue(int);
void squareByRef(int&);
int main(){
	int x{ 2 }; int y{ 4 };
	cout << "x = " << x << " before squareByValue" << endl;
	cout << "Value returned by squareByValue: " << squareByValue(x) << endl;
	cout << "x = " << x << " after squareByValue" << endl;

	cout << "y = " << y << " before squareByRef" << endl;
	squareByRef(y);
	cout << "y = " << y << " after squareByRef" << endl;
}
int squareByValue(int val){
	return val *= val;
}
void squareByRef(int& valRef){
	valRef *= valRef;
}