#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
int main(){
    array<int, 4> n{10,20,30,40};
    int sum{0};
    for (size_t i{0}; i < n.size(); i++)
        sum += n[i];
     cout << "total of array elements: " << sum << endl;
}