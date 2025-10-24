#include <iostream>
using namespace std;
int main(){
    int x{5},z{3};
    int* const y{&x};
    //y = &z; // error
    cout << y << " " << *y << endl;
} 