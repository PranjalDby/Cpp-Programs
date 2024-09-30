#include <iostream>
#include <iomanip>
#define MAX 1000
using namespace std;

class Circle
{
public:
    // double radius;
    double compute_area(int radius)
    {
        return 3.14 * radius * radius;
    }
    double getCircumfrence(int radius)
    {
        return 2 * 3.14 * radius;
    }
};
// Arithmetic Class
class ArithMetic
{
public:
    void
    add(),
        subs(), div(), mul();
};
void ArithMetic::add()
{
    cout << "Function Definition" << endl;
    int a, b = 0;
    cout << "Enter The value of a and b = " << endl;
    cin >> a >> b;
    cout << "Sum of Two Number is = " << a + b << endl;
}
void ArithMetic::subs()
{
    cout << "Function Definition" << endl;
    int a, b = 0;
    cout << "Enter The value of a and b = " << endl;
    cin >> a >> b;
    cout << "difference of Two Number is = " << a - b << endl;
}
void ArithMetic::div()
{
    cout << "Function Definition" << endl;
    int a, b = 0;
    cout << "Enter The value of a and b = " << endl;
    cin >> a >> b;
    cout << "division of Two Number is = " << a / b << endl;
}
void ArithMetic::mul()
{
    cout << "Function Definition" << endl;
    int a, b = 0;
    cout << "Enter The value of a and b = " << endl;
    cin >> a >> b;
    cout << "multiplication of Two Number is = " << a * b << endl;
}
int main()
{
    // Circle circle;
    // circle.radius = 42.12;

    cout << sizeof(Circle) << endl;
    // cout << "area of circle = " << circle.compute_area();

    cout << "Entered into the Main" << endl;
}