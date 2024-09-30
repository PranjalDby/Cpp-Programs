#include <iostream>
#include <algorithm>
// #include "test.cpp"
using namespace std;

extern string SPECS; // we want to use it in another file

void travers(bool cond)
{
    if (cond)
    {
        int sum = 1;
        for (int i = 0; i < 10; i++)
        {
            sum += i;
        }
    }
    for (int j = 0; j < 50; j++)
    {
        for (int k = 50 - 1; k >= 0; k--)
        {
            printf("j = %d: k = %d", j, k);
        }
    }
}

/// @brief Static Variable in a Function
/// @return void

// Static Variables: inside a functions and inside the class
void demo()
{
    static int count = 0; // memory is allocated for only one time and value is passed through every call
    cout << count << " ";
    count++;
}

class ABC
{
public:
    static int k;
    ABC() {};
};

// initializing the value of i seperately
int ABC::k = 100;

// creating a static object
class A
{
    int i;

public:
    A()
    {
        i = 0;
        cout << "Inside the Constructor\n";
    }
    // destructor
    ~A()
    {
        cout << "Inside the Destructor\n";
    }
};
int main()
{
    int arr[60];
    int size = 0;
    // cout << "Enter the Size of an array = " << endl;
    // cin >> size;
    // cout << "Enter the Elements = " << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "Printing The arr = " << endl;
    // for (int k = 0; k < size; k++)
    // {
    //     cout << arr[k] << endl;
    // }
    // Insertion of an element in an array at certain position
    // int pos = 0, el = 0;
    // cout << "Enter the Pos and the Element you want to insert: " << endl;
    // cin >> pos >> el;
    // for (int j = size - 1; j >= pos; j--)
    // {
    //     arr[j + 1] = arr[j];
    // };
    // arr[pos] = el;
    // size++;
    // cout << "Printing The arr = " << endl;
    // for (int k = 0; k < size; k++)
    // {
    //     cout << arr[k] << endl;
    // }

    for (int i = 0; i < 10; i++)
    {
        demo();
    }

    ABC abc;
    // ABC abc2;
    cout << "Value of static variable k = " << abc.k << endl;

    if (1)
    {
        static A aa;
    }
    cout << "End of the Main\n";
}