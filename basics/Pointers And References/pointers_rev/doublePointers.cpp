#include <iostream>
using namespace std;

int main()
{
    // A pointer to pointer or A double pointer is pointer pointing to memory address of another pointer which points to a variable;
    int num = 100;
    int *ptr = &num; // normal pointer
    cout << "Address of normal pointer " << &ptr << endl;
    int **ptr2 = &ptr;
    cout << "address pointing by double pointer = " << ptr2 << endl;

    // dereferencing the double pointer
    cout << "Value of variable = " << **ptr2 << endl;
    ;
    // changing the value of variable
    **ptr2 = 50;
    cout << "value of variable after changing   " << num << endl;
    return 0;
}