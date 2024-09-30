#include <iostream>
#include <iomanip>
#include <ios>
#include <algorithm>
using namespace std;

void insertAt(int arr[], int &n, int pos, int element)
{
    for (int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    n++;
    arr[pos] = element;
}
int main()
{
    int a = 10, b;
    float f = 2.3456;
    cout << setw(4) << a << endl;
    cout << setw(5) << setfill('*') << a << endl;
    cout << "Decimal: " << setbase(10) << a << endl;
    cout << "Octal: " << setbase(8) << a << endl;
    cout << setw(5) << setfill('*') << a << endl;
    cout << setw(5) << setfill('*') << a << endl;
    int arr[100];
    std::fill_n(arr, 100, 0);
    int n;
    cout << "Enter the size: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "After Insertion: " << endl;
    int pos;
    cout << "Enter the Pos: " << endl;
    cin >> pos;
    insertAt(arr, n, pos, 30);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}