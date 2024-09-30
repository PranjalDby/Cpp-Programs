#include <iostream>
using namespace std;

int main()
{

    int a = 10, b = 25;
    void swap(int *, int *);
    cout << "before function calling" << a << " " << b << endl;
    swap(&a, &b);
    cout << "After calling the function " << a << " " << b;

    //pass by reference
    return 0;
}

void swap
void swap(int *a, int *b)
{
    int z;
    z = *a;
    *a = *b;
    *b = z;
}