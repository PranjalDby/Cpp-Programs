#include <iostream>

#include "userDefined.hpp"
using namespace std;


// constant_member_function.cpp
class Date
{
public:
    Date(int mn, int dy, int yr);
    int getMonth() const;  // A read-only function and const after function name specifies that the function is a constant member function. this is a crucial aspect of the declarations. it means that function promises not to modify any memeber variables of object on which it is called.
    void setMonth(int mn); // A write function; can't be const
private:
    int month;
};

Date::Date(int mn, int dy, int yr)
{
    // constructor implementation
}

int Date::getMonth() const
{
    return month; // Doesn't modify anything
}
void Date::setMonth(int mn)
{
    month = mn; // Modifies data member
}

//constexpr function
// pass by value
constexpr float exp(float x,int n){
    return n == 0 ? 1:
            n % 2 == 0 ? exp(x * x,n/2):
            exp(x * x,(n-1)/2) * x;
};

// pass by reference

constexpr float exp2(const float &x, const int &n){
    return n == 0 ? 1 : (n % 2 == 0) ? exp2(x * x,n / 2) : exp2(x * x,(n-1)/2) * x;
};

// compile-time computation of array length
template<typename T,int N>
constexpr int length(const T(&)[N]){
    return N;
};

//compile-time computation of factorial
constexpr int fac(int n){
    return n == 1 ? 1 : n * fac(n-1);
};

int main()
{
    Date MyDate(7, 4, 1998);
    const Date BirthDate(1, 18, 1953);
    MyDate.setMonth(4);   // Okay
    //cout << BirthDate.getMonth() <<endl; // Okay
    // BirthDate.setMonth(4); // C2662 Error



    // ------------------------ constexpr function ----------------------------------------

    constexpr float x = 23.0;
    constexpr float y{2.0};

    //extern
    const long long int id = 762111110222992929;
    // constexpr float z = exp(3);
    // constexpr int i; //error !Not initialized,"constexpr must be initialized"
    const int j = 0;
    const int k = j + 1; // Fix: Added 'const' storage class specifier

    // cout << k <<" " << z << endl;

    // -------------------------------------- constexpr func examples ----------------------------------------------------------
    
    int a = 34_i + 54_i;
    cout << a << endl;

    //pass by value
    int value = exp(3,5);
    cout << value << endl;
    //pass by reference

    float e = 32.0;
    int n = 4;
    int ref = exp2(e,n);
    cout << ref << endl;

    // compile-time computation of array length

    int arr[] ={10,20,40,50};
    cout << "Array length computed at compile time = " << length(arr) << endl;

    // factorial

    cout << "fact = " << fac(10) << endl;


    
}
