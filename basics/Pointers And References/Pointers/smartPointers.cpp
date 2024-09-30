#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
};
void fun()
{
    // dynamically creating the object of class rectangle
    Rectangle *p = new Rectangle(); // object takes a memory
}
int main()
{
    while (1)
    {
        fun(); // this causes MLE or Memory Limit exceed
    }
    return 0;
}