#include <iostream>

using namespace std;

/// @brief Using A pointer Inside the classes
/// @return

class Array
{
public:
    int size = 0;
    int *ptr = NULL;
    void createArray(int);
    void printArray();
};
void Array::createArray(int n)
{
    size = n;
    ptr = new int[size]; // pointer to the array;
    cout << "Enter The Elements = " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> *(ptr + i);
    }
}
void Array::printArray()
{
    cout << "Printing the Array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << *(ptr + i) << " ";
    }
}
int main()
{
    Array arr;
    arr.createArray(5);
    arr.printArray();
}