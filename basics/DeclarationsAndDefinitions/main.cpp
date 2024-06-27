#include <iostream>
#include <math.h>
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
operator _i (int i);
constexpr float exp(float x,int n){
    return n == 0 ? 1:
            n % 2 == 0 ? exp(x * x,n/2):
            exp(x * x,(n-1)/2) * x;
}
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
    constexpr float z = exp(3);
    // constexpr int i; //error !Not initialized,"constexpr must be initialized"
    const int j = 0;
    constexpr int k = j + 1; //Error! j not a constant expression, "constexpr must be initialized with const variable"

    cout << k <<" " << z << endl;

    // constexpr func example

    cout << exp(5,3);
    
}
