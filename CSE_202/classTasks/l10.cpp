#include <iostream>
using namespace std;

// constructors and destructors

class Rectangle
{
    int length, breadth, height;

public:
    // parameterized constructor
    Rectangle(int a, int b)
    {
        length = a;
        breadth = b; // initialization
    }
    // constructor without parameter
    Rectangle()
    {
        length = 0, breadth = 0, height = 0;
    }
    Rectangle(int x, int y, int z)
    {
        length = x, breadth = y, height = z;
    }
    int area()
    {
        return length * breadth;
    }
    // // constructor with default parameter
    // Rectangle(int x = 10, int y = 50, int h = 100)
    // {
    //     length = x;
    //     breadth = y, height = h;
    // }
    // Copy Constructor
    Rectangle(Rectangle &obj1)
    {
        cout << "Copy Constructor." << endl;
        cout << obj1.length << " " << obj1.breadth << endl;
        length = obj1.length;
        breadth = obj1.breadth;
    }
    // destructor
    ~Rectangle()
    {
        cout << "Object is destroyed." << endl;
    }
};
class counter
{
public:
    int id;
    counter(int i) : id(i) {}; // initializer list

    // destructor
    ~counter()
    {
        cout << "Counter Object is destroyed. " << id << endl;
    }
};
int main()
{
    Rectangle r1(10, 20, 40);
    counter c1(1);
    counter c2(2);
    counter c3(3);
    cout << "Exit of main \n";
    return 0;
}