#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

void display(char = '@', int = 1); // function declaration
int main()
{
    // display();
    // cout << "With on argument will be passed: \n"
    //      << endl;
    // display('@', 10);

    // cout << "Displaying the factorial: \n";
    // int factorial(int = 1);
    int n, m;
    int count = 0;
    cin >> n >> m;
    int arr[2 * m];
    int size = 2 * m;
    // std::fill_n(arr, size, 0);
    for (int j = 0; j < n; j++)
    {
        for (int i = count; i < size; i++)
        {
            cin >> arr[i];
            count++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    int first_counter = 0;
    for (int i = 0; i < n; i++)
    {
        double first_avg = 0;
        for (int j = 0; j < m; j++)
        {
            first_avg += arr[first_counter];
            first_counter++;
        }
        cout << first_avg << endl;
        cout << "Student " << i + 1 << ": " << setprecision(2) << fixed << (first_avg / m) << endl;
        first_avg = 0;
        first_counter + 1;
    }
    return 0;
}
int factorial(int n)
{
    if (n < 2)
    {
        return 1;
    }
}
void display(char c, int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << c << " ";
    }
}