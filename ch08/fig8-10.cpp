void f(int const*);
int main(){
    int n{1};
    f(&n);
}
void f(int const* i){
    //*i = 2;    // error
}