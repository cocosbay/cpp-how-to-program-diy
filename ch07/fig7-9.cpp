#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
int main(){
    array<int,30> m{
        0,1,3,1,1,0,1,2,2,3,
        0,0,1,1,3,0,1,1,2,2,
        3,1,1,2,0,3,3,0,0,3 };
    array<int, 4> n{0,0,0,0};
    for (size_t i{0}; i<m.size(); i++)
        ++n[ m[ i ] ];
    cout << "element" << setw(10) << "rating" << endl;    
    for (size_t i{0}; i<n.size(); i++)
        cout << i << setw(15) << n[i] << endl;        
}