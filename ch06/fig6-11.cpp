#include <iostream>
using namespace std;
int x{ 1 };
void useLocal();
void useStaticLocal();
void useGlobal();
void useLocal();
void useStaticLocal();
void useGlobal();
int main() {
	cout << "global x in main is " << x << endl;
	int x{ 5 };
	cout << "\nlocal x in main outer scope is " << x << endl;
	{
		int x{ 7 };
		cout << "local x in main inner scope is " << x << endl;
	}
	cout << "local x in main outer scope is " << x << endl;
	useLocal();
	useStaticLocal();
	useGlobal();
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	useLocal();
	useStaticLocal();
	useGlobal();
	cout << "\nlocal x in main is " << x << endl;
}
void useLocal() {
	cout << endl;
	int x{ 25 };
	cout << "local x is " << x << " on entering useLocal" << endl;
	++x;
	cout << "local x is " << x << " on exiting useLocal" << endl;
}
void useStaticLocal() {
	cout << endl;
	static int x{ 50 };
	cout << "local static x is " << x << " on entering useStaticLocal" << endl;
	++x;
	cout << "local static x is " << x << " on exiting useStaticLocal" << endl;
}
void useGlobal() {
	cout << endl;
	cout << "global x is " << x << " on entering useGlobal" << endl;
	x *= 10;
	cout << "global x is " << x << " on exiting useGlobal" << endl;
}