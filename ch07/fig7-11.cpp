#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
int main(){
    array<int,3> n{1,2,3};
    for (int& m : n)
        m *= 2;
    cout << "after updated" << endl;
    for (int m : n)
        cout << m << " ";
}