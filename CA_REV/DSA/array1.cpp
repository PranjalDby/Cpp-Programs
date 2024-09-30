#include <iostream>
using namespace std;

int main()
{
    // swap alternate:0,1,2,3;
    int arr[] = {1, 2, 7, 8, 5};
    int i = 0, j = 0;
    while (j + 1 < sizeof(arr) / sizeof(arr[0]))
    {
        swap(arr[j], arr[j + 1]);
        j += 2;
    }
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }

    // Unique ELements
    //
    int arr1[] = {2, 3, 1, 6, 3, 6, 2};
    // using property of xor
    int res = 0;
    for (int i = 0; i < 7; i++)
    {
        res ^= arr1[i];
    }
    cout << res << endl;
    cout << (1 ^ 2) << endl;
}