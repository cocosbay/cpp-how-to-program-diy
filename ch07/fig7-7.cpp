#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
int main(){
    const size_t arrSize{11};
    array<unsigned int, arrSize> n{0,0,0,0,0,0,1,2,4,2,1};
    for (size_t i{0}; i < n.size(); ++i){
        cout << i*10 << "-" << i*10+9 << ": ";
        if (n[i] != 0) 
            for (unsigned int j{0}; j < n[i]; ++j)
                cout << "*";
        cout << endl;
    }
}