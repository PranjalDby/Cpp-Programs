#include <iostream>

using namespace std;
int main()
{
    // static array
    int staticArray[30]; // it has a fixed size of 30; and this size is allocated during compile time

    // dynamic size array;
    int n;
    cout << "Enter the size of an array: " << endl;
    cin >> n;

    cout << "Creating a dynamic array using malloc " << endl;
    int *dynamicArr = (int *)malloc(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter The Element = " << endl;
        int e;
        cin >> e;
        dynamicArr[i] = e;
    }

    // printing the content of an array
    for (int i = 0; i < n; i++)
    {
        cout << dynamicArr[i] << endl;
    }
    dynamicArr[n + 1] = 20;
    cout << "" << endl;
    // printing the content of an array
    for (int i = 0; i < n; i++)
    {
        cout << dynamicArr[i] << endl;
    }

    int a, b, sum = 0;
    cout << "Enter The Two Numbers a and b = " << endl;
    cin >> a >> b;
    sum = a + b;
    cout << "Sum of two Number is  = " << sum << endl;
}