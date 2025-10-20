#include <iostream>
#include <iomanip>
#include <array>
#include <random>
using namespace std;
int main(){
    array<int,7> n{0,0,0,0,0,0,0};
    default_random_engine engine(static_cast<unsigned int>(time(0))); 
    uniform_int_distribution<unsigned int> randomInt(1, 6);
    for (size_t i{0}; i < 100; i++)
        ++n[randomInt(engine)];
    cout << "index" << setw(10) << "element" << endl;
    for (size_t i{1}; i < n.size(); i++)
        cout << i << setw(10) << n[i] << endl;
}