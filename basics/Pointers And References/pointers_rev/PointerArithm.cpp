#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int v[4] = {10, 45, 32, 67};
    int *ptr = v; // name of the array is pointer to the first element.
    for (int i = 0; i < sizeof(v) / sizeof(v[0]); i++)
    {
        cout << "Value at ptr = " << ptr << "\n";
        cout << "Value at *ptr = " << *ptr << "\n";

        // incrementing the pointer address by 1
        ptr++;
    }

    // Advanced Pointer Notation:consider pointer notation for two-dimensional numeric array
    int num[2][2] = {{20, 56}, {67, 89}};
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            printf("[%d][%d] = %d", i, j, *(*num + (2 * i) + j)); // row Major Form
        }
    }
    return 0;
}