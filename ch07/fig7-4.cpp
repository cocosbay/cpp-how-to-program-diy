#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
int main(){
    array<int, 3> n{1,2,3};
    cout << "index" << setw(10) << "element" << endl;
    for (size_t i{0}; i < n.size(); i++)
        cout << i  << setw(10) << n[i] << endl;
}