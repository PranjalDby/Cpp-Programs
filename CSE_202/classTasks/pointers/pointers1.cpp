#include <iostream>

using namespace std;

typedef int i;
int main()
{
    i a = 20, *p, **q;
    p = &a;
    q = &p;
    cout << "Value of a = " << a << " stored at " << p << " Stored at " << q << "\n";

    cout << "Before doing pointer arithmetic = " << &p << endl;
    p = p + 4;
    cout << q << endl;

    // void pointers:points to memory location of aany datatype.
    void *p1 = &a;
    cout << "Value stored at address  = " << p1 << " and the value s = " << *((int *)p1) << endl;
    char c = 'P';
    p1 = &c;
    cout << "Value stored at address  = " << p1 << " and the value s = " << *((char *)p1) << endl;

    // const pointers
    int n1 = 0, n2 = 0;
    int *const ptr = &n1; // it has fixed address;
    // ptr = &n2;it will throw an error
    *ptr = 100;
    cout << "Value = " << *ptr << endl;

    // pointer to the const;
    const int *co = &n2;
    // *co = 200; it will Throw an error
    co = &n1;

    // const pointer to const variable

    const int l1 = 200, l2 = 400;
    const int *const dual = &l1;
    // *dual = 300; throws an error;
    // dual = &l2; throws an error;
    cout << "Address = " << dual << " Value = " << *dual;
}