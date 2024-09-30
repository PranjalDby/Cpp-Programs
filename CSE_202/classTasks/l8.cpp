#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 20, b = 19;
    int *p = &a;
    cout << a << " -> " << &a << "\n";
    cout << p << " -> " << &p << " -> " << *p << "\n";

    /**
     * write a program to perform addition,subtraction,multiplication and division of two variables using pointers.
     *
     * task2:
     * write a program to ask a user to enter any number and print the table of that number
     */

    int *p1 = &a, *p2 = &b;
    int sum = *p1 + *p2;
    int sub = *p1 - *p2;
    int mul = *p1 * (*p2);
    int divide = *p1 / *p2;
    cout << "Sum = " << sum << "\n"
         << "Sub = " << sub << "\n"
         << "mult = " << mul << "\n"
         << "Divide = " << divide;

    int n;
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << setw(2) << "*" << setw(3) << i << " = " << (n * i) << endl;
    }
    return 0;
}