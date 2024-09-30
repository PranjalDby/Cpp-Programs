#include <iostream>

using namespace std;

class Window
{
public:
    Window(); // default constructor
    int x1, x2;
    Window(int x1, int x2);
    bool setCaption(const char *szTitle);
    const char *GetCaption();
    char *szWinCaption;
};
// declaring the pointer to member

int Window::*ptr_x1 = &Window::x1;

class Rectangle
{
public:
    int length;
    int breadth;
    int area(int l, int b);
};
int Rectangle::area(int l, int b)
{
    return l * b;
}
// declaring a pointer to the length of rectangle;
int Rectangle::*l_ptr = &Rectangle::length;
// declaring a pointer to the breadth of rectangle;
int Rectangle::*b_ptr = &Rectangle::breadth;

// a pointer to the member function
int (Rectangle::*ptr)(int, int) = &Rectangle::area;
int print(int s)
{
    cout << s;
    return 10;
}
int (*ptr3)(int) = &print; // pointer to function

class Data
{
public:
    int a;
    void print()
    {
        cout << "a is = " << a << endl;
    }
};
int main()
{
    Rectangle re;
    re.*l_ptr = 40;
    re.*b_ptr = 20;
    cout << ptr3(3) << endl;
    ;
    cout << "Length of rectangle = " << re.length << endl;
    cout << "Breadth of rectangle = " << re.breadth << endl;
    cout << "Area of rectangle = " << (re.*ptr)(re.*l_ptr, re.*b_ptr) << endl;
    Data d, *ptr;
    ptr = &d;
    int Data::*pt2 = &Data::a;
    d.*pt2 = 50;
    d.print();
    ptr->*pt2 = 40;
    ptr->print();
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int(*ptr4)[3] = arr;
    cout << ptr4[1][2] << endl;
    int m[3][2] = {{2, -5},
                   {4, 0},
                   {9, 1}};
    for (int i = 3; i > -1; --i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cout << m[i][j];
        }
    }
}