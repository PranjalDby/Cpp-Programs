#include <iostream>
using namespace std;

int divide(int a, int b)
{
    return a / b;
}
int multiply(int a, int b)
{
    return a * b;
}
int sub(int a, int b)
{
    return a - b;
}
int add(int a, int b)
{
    return a + b;
}

bool isEvenOrOdd(int res)
{
    if (res % 2 == 0)
    {
        return true;
    }
    return false;
}
class Rectangle
{
public:
    int l;
    int b;
};
int main()
{
    int a, b = 0;
    printf("Enter the value of a and b: ");
    // cin >> a >> b;

    const int id = 4000;
    // creating a const pointer
    const int *ptr = &id;
    cout << *ptr << endl;
    int nonConst = 3001;
    ptr = &nonConst;
    cout << *ptr;

    Rectangle r{};
    r.b = 3433;
    r.l = 0;
    int area = (r.b * r.l);
    printf("%d\n", r.b);
    return 0;
}