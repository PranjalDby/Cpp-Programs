#include <iostream>
using namespace std;

int exponent(int base, int power)
{
    if (power == 0)
    {
        return 1;
    }
    return base * exponent(base, power - 1);
}
void print(int (*funcPtr)(int a, int b), int a, int b)
{
    cout << "Value of " << a << " raise to " << b << " is " << funcPtr(a, b);
}
int main()
{

    // 1.Function pointer used to call the function

    // declaration of function pointer: data_type (*pointer_name)(params...);
    int (*func)(int, int);
    func = exponent;
    // because function name without paranthesis give us a address of that function
    cout << "Verifying that function name without parans has memory addr = " << exponent << endl;
    int res = func(5, 2);
    cout << "res = " << res << endl;
    // passing a function pointer as parameter
    cout << "passing a function pointer as a parameter." << endl;
    print(exponent, 10, 4);
}
