#include <iostream>

using namespace std;

int main()
{
    // bitwise and &

    int a = 2, b = 4;
    int res = a & b;
    cout << "a & b = " << res << endl;

    // bitwise OR (|)
    res = a | b;
    cout << "a | b = " << res << endl;

    // NOT bitwise (~)

    res = ~a;
    cout << "~a " << res << endl;
    // XOR bitwise (^)
    res = a ^ b;
    cout << res << endl;

    // left shift

    int leftShift = 3 << 2;
    cout << leftShift << endl;

    // left and right shift is done by 0 padding
    // left shift = multiply it no of places that we have to shift by 2
    // right shift vice-versa

    cout << (17 >> 1) << endl;

    int number = 10;

    // post/pre increment,decrement

    cout << number++ << endl; // post increment : first use it and then increment
    cout << number++ << endl;
    cout << number << endl;
    int bb = 3;
    bb += ++number; // pre-incr : first increment it and then assign it
    cout << bb << endl;

    a = 1, b = 1;
    a = 10;
    if (++a)
    {
        cout << b << endl;
        ;
    }
    else
    {
        cout << ++b;
    }
    a = 1, b = 2;

    if (a-- && ++b > 2)
    {
        cout << "Stage1 -Ifdf" << endl;
    }
    else{
        cout << "stage2" << endl;
    }
    
}