#include <iostream>
using namespace std;

// functions

int add(int, int); // function declaration
inline int area(int x)
{
    return x * x;
}
int main()
{
    // int res = add(10, 30);
    // cout << "Sum of Two Numbers = " << res << endl;
    void print();    // function declaration
    void print(int); // function declaration
    print();         // function Calling

    // calling function with parameter but no return value
    print(10);
    cout << "\n";
    // int divide();
    // cout << "res " << divide();
    int max(int, int);
    cout << "Max of 45 and 10 " << max(45, 10) << endl;
    cout << area(67);
    return 0;
}

// function definition
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }

    return b;
}
void print()
{
    for (int i = 1; i <= 30; i++)
    {
        cout << "*";
    }
    cout << "\n";
}

void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "*" << " ";
    }
}
int add(int a, int b)
{
    int s = a + b;
    return s;
}

int divide()
{
    cout << "Dividing 50 With 42 " << endl;
    return (50 / 42);
}