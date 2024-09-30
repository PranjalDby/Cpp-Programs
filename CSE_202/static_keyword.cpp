#include <iostream>
using namespace std;

// static variable inside the functions: one time initialization
void fun()
{
    int static count = 0;
    cout << count << endl;
    count++;
}
// static variables in a class
class Rog
{
public:
    static int i;
    int roll;
    static void printMsg()
    {
        cout << "hello This is a static member function\n"
             << "Accessing static variable = " << i << endl;
    }
    Rog() {};
};

// variable initialization
int Rog::i = 100;
int main()
{
    Rog r1, r2;
    cout << "Value of i for object r1 = " << r1.i << endl;
    cout << "Value of i for object r2 = " << r2.i << endl;
    Rog::printMsg();
}