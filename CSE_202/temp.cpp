#include <iostream>

using namespace std;

void insert(int arr[], int n, int pos, int e)
{
    for (int i = n + 1; i >= pos - 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = e;
}

class A
{
    static int aa;

public:
    void get()
    {
        cout << aa << endl;
    }
    inline int add(int a, int b)
    {
        return a + b;
    }
};
int A::aa = 10;
int main()
{
    // int n = 0, pos, e;
    // cin >> n;
    // int array[n + 1];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> array[i];
    // }
    // cin >> pos >> e;
    // cout << "Oringinal array: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << array[i] << " ";
    // }
    // cout << "Size of array = " << (sizeof(array) / sizeof(array[0])) << " \n";
    // if (pos < 0 || pos >= n)
    // {
    //     cout << "invalid position! " << endl;
    // }
    // else
    // {

    //     cout << "Updated array: ";
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << array[i] << " ";
    //     }
    // }
    A aa;
    aa.get();
    aa.add(30, 40);
}