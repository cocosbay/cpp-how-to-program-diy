#include <iostream> 
#include <iomanip>
#include <array>
using namespace std;
int main() {
     array<unsigned int,5> n;
     for (int i{0}; i<n.size();++i)
        n[i] = 0;     
    cout << "element" << setw(12) << "value" << endl;    
    for (int i{0}; i<5;++i)
        cout << i << setw(12) << n[i] << endl;
}