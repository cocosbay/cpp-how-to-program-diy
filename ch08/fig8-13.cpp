#include <iostream>
using namespace std;
size_t getSize(double*);
int main() {
    double nums[20];
   cout << "The number of bytes in the array is " << sizeof(nums);
   cout << "\nThe number of bytes returned by getSize is "
        << getSize(nums) << endl;
}
size_t getSize(double* ptr){
    return sizeof(ptr);
}