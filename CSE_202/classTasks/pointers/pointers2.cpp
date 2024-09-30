#include <iostream>

using namespace std;

// types of pointers

class A
{
public:
    int a;
    void print(int a)
    {
        cout << "Value of a= " << a << endl;
        ;
    }
};

int square(int a, char c)
{
    cout << c << endl;
    return a * a;
}
int main()
{
    int *ptr; // wild-pointer:becuase it is not initalized to any valid memory location.
    {
        int y = 33;
        ptr = &y; // Normal Pointer.
        cout << "Value is inside the block scope = " << *ptr << endl;
        cout << "address is inside the block scope = " << ptr << endl;
    }
    cout << "Vlue outside the block  = " << *ptr << endl; // dangling pointer
    *ptr = 400;
    cout << "Vlue outside the block  = " << *ptr << endl;
    cout << "address is outside the block scope = " << ptr << endl;
    ptr = NULL; // NULL ptr;

    // --------------------------- A pointer to objects ----------------------------------------------------

    int A::*ptrMember = &A::a;           // declaring a pointer which points to data member a;
    void (A::*ptrFunc)(int) = &A::print; // declaring the pointer pointing to the member function;

    A obj1;
    obj1.*ptrMember = 50;
    (obj1.*ptrFunc)(30);
    int (*funcPtr)(int, char) = &square;
    cout << (*funcPtr)(79, 'a');
}