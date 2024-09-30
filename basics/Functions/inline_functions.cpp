#include <iostream>
using namespace std;

inline int multiply(int a, int b)
{
    return a * b;
};
class Square
{
    int BB = 200;

public:
    int side;
    inline int area();
};

inline int Square::area()
{
    int side = Square::side;
    return side * side;
}
int main()
{

    // inline functions
    // int res = multiply(30, 40);
    // cout << res << endl;
    Square sr;
    sr.side = 100;
    int area = sr.area();
    cout << "Area of Square is = " << area << endl;
}