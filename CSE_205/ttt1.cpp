#include <iostream>
#include <iomanip>
#include <ios>
#include <limits>
using namespace std;
void cape(string arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallest = i;

        for (int j = i + 1; j < n; j++)
        {

            if ((int)arr[smallest][0] >= (int)arr[smallest][0])
            {
                cout << "Smallest = " << endl;
                smallest = j;
            }
        }
        if (smallest != i)
        {
            swap(arr[smallest], arr[i]);
        }
    }
}
struct st
{
    string name;
    int dtatal;
};

union acc
{
    st s;
};
int main()
{
    // int n, st;
    // cin >> st >> n;
    // for (int i = st; i <= n; i++)
    // {
    //     bool isPrime = true;

    //     for (int j = 2; j <= i / 2; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             isPrime = false;
    //             break;
    //         }
    //     }

    //     if (isPrime && i > 1)
    //     {
    //         cout << i << " ";
    //     }
    // }
}