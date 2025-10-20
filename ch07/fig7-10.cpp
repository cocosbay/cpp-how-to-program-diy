#include <iostream>
#include <array>
using namespace std;
void staticArray(void);
void autoArray(void);
int main(){
    cout << "1st round" << endl;
    staticArray();
    autoArray();
    cout << "\n\n2nd round" << endl;
    staticArray();
    autoArray();
}
void staticArray(void){
    static array<int,3> m{0,0,0};
    cout << "\norigin static array" << endl;
    for (size_t i{0}; i<m.size(); i++)
        cout << "array[" << i << "] = " << m[i] << " ";
    for (size_t i{0}; i<m.size(); i++)
        ++m[i]; 
    cout << endl;
    cout << "updated static array" << endl;
    for (size_t i{0}; i<m.size(); i++)
        cout << "array[" << i << "] = " << m[i] << " ";
}
void autoArray(void){
    array<int,3> m{0,0,0};
    cout << "\norigin auto array" << endl;
    for (size_t i{0}; i<m.size(); i++)
        cout << "array[" << i << "] = " << m[i] << " ";
    for (size_t i{0}; i<m.size(); i++)
        ++m[i]; 
    cout << endl;
    cout << "updated auto array" << endl;
    for (size_t i{0}; i<m.size(); i++)
        cout << "array[" << i << "] = " << m[i] << " ";
}