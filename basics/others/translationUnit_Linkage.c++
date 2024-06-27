#include<iostream>

using namespace std;

// examples of some declarations

// int i;
// int f(int x);
// class C;

// definitions of some declarations
int i{42}; // initializer list
int f(int x){return x+1;}
class C{
    public:
    C(int x):x{x}{}
    int x;
};

//giving internal object a external linkage

extern const int aa = 102;
extern constexpr int addTen(int a){
    cout << a + 10;
    return a * 10;
}


int main(){
    
    cout << 2 ;

}