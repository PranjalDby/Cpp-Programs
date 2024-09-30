#include <iostream>
using namespace std;

// pass by value
int square(int s)
{
    return s * s;
}
int square_pointer(int *s)
{
    *s = 10;
    return *s * (*s);
}
int square_reference(int &s)
{
    s = 9;
    return s * s;
}
int main()
{
    int x = 4;
    cout << "Using Pass By value = " << square(x) << " Value of X = " << x << endl;
    cout << "Using Pass By pointer = " << square_pointer(&x) << " Value of X = " << x << endl;
    cout << "Using Pass By reference = " << square_reference(x) << " Value of X = " << x << endl;
    return 0;
}