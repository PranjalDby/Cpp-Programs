#include <iostream>

using namespace std;

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
            cout << arr[i] << endl;
    }
    // changing the value
    arr[2] = 177;
}

void printCharArray(char a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
}

int findMaximum(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}
int findMinimum(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    return min;
}
bool itIsPrimeNumber(int n)
{

    for(int i = 2;i <= n-1; i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}
int main()
{

    // declaration of array

    int arr[15]; // declared an array of type int and of size 15

    // initializing an array
    int arr2[3] = {1, 2, 3};
    int arr3[15] = {5, 6, 1};
    int n = sizeof(arr3) / sizeof(arr3[0]);
    // printArray(arr3, n);
    // printArray(arr3, n);

    // dynamic char array
    char charARr[] = {'a', 'b', 'c', 'd', 'e'};
    // cout << sizeof(charARr) << endl;
    // printCharArray(charARr, sizeof(charARr));

    // Array Questions

    int array[] = {10, 2, 1, -1, 7, 3, 30};
    n = sizeof(array) / sizeof(array[0]);
    // cout << "Maximum Element in our Array = " << findMaximum(array,n) << endl;
    // cout << "Minimum Element in our Array = " << findMinimum(array,n);

    // cout << static_cast<bool>(itIsPrimeNumber(2)) << endl;

    int i = 1,j = 1;
    while (i <= 4){
        cout << "\n";
        while(j<=4){
            cout << i;
            j+=1;
        }
        j = 1;
        i+=1;
    }
    // -------------------------------------------------------------------------
    cout << endl;
    i = 0;j = 0;
    while (i <= 4){
        cout << "\n";
        while(j<i+1){
            cout << "⭐";
            j+=1;
        }
        j = 0;
        i+=1;
    }
    // --------------------------------------------------------------------------
    i = 4;j = 1;
    while (i > 0){
        cout << "\n";
        while(j<=i){
            cout << "⭐";
            j+=1;
        }
        j = 1;
        i-=1;
    }
    // ---------------------------------------------------------------------------
    cout << endl;
    int p;
    cin >>p;
    // i = 1;
    int count = 1;
    // while (i<=p)
    // {   
    //     int j = 1;
    //     while(j<=n){
    //         cout << count << " ";
    //         count +=1;
    //         j+=1;
    //     }
    //     cout << endl;
    //     i+=1;
    // }
    
    // ------------------------------------------------------------------------------
    i = 1;
    count = 1;
    while(i<=p){
        int j = 1;
        while(j <= i){
            cout << count <<  " ";
            count += 1;
            j+=1;
        }
        cout << endl;
        i+=1;
    }
    // --------------------------------------------------------------------------------
    i = 1;
    count = 1;
    while(i<=p){
        int j = 1;
        int val = i;
        while(j <= i){
            cout << val<<  " ";
            val+=1;
            j+=1;
        }
        cout << endl;
        i+=1;
    }
}