#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
int main(){
    array<int, 5> n{0,0,0,0,0};
    cout << "index" << setw(10) << "element" << endl;
    for (size_t i{0}; i < n.size(); i++)
        n[i] = i*2+2;
     for (size_t i{0}; i < n.size(); i++)
         cout << i << setw(10) << n[i] << endl;
}