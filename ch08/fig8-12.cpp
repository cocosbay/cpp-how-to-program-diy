#include <iostream>
using namespace std;
int main(){
    int x{5},y;
    const int* const z{&x};
    cout << *z << endl;
//    z = &y;
//    *z = 8;
}