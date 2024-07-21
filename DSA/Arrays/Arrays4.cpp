#include <iostream>
#include <math.h>
#include <vector>
#include<iomanip>
using namespace std;

int binaryS(vector<int> &arr, int s, int e, int k)
{
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (k > arr[mid])
        {
            s = mid + 1;
        }
        else if (k < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int getPivotIndex(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= arr[0])
        {
            // lies on first line or element is in b/w arr[0] .... arr[mid-1]
            start = mid + 1;
        }
        else
        {
            // lies on second line or element is in b/w arr[mid] .... arr[n-1]
            end = mid;
        }
    }

    return start;
}

int findElementK(vector<int> &nums, int n, int k)
{
    int pivot = getPivotIndex(nums);
    if (k >= nums[pivot] && k <= nums[n - 1])
    {
        return binaryS(nums, pivot, n - 1, k);
    }
    else
    {
        return binaryS(nums, 0, pivot - 1, k);
    }
}
int findElementKAppr2(vector<int> &arr, int n, int k)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] == k)
        {
            return mid;
        }

        // case2 left-half is sorted

        if (arr[mid] >= arr[s])
        {
            // If the k lies within this sorted half,
            // move the right pointer to mid - 1.
            if (k >= arr[s] && k < arr[mid])
            {
                e = mid - 1;
            }

            // Otherwise, move the s pointer to mid + 1.
            else
            {
                s = mid + 1;
            }
        }
        else
        {
            // right-sorted part
            if (k > arr[mid] && k <= arr[e])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return -1;
}

double floorSqrt1(int n)
{
    int s = 0;
    int e = n;

    while (s <= e)
    {
        // to handle large integer values
        long long int mid = s + (e - s) / 2;
        if (pow(mid, 2) > n)
        {
            e = mid - 1;
        }
        else if (pow(mid, 2) < n)
        {
            s = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    long double ans = 1;
    double actual = 0;
    for (int i = 0; i < 3; i++)
    {
        ans = ans / 10;
        for (double j = e; j * j < n; j = j + ans)
        {
            actual = j;
            cout << j << endl;
        }
    }
    cout << "AN" << actual <<endl;
    return actual;
}

int main()
{
    vector<int> arr = {5, 8, 9, 10, 1, 3, 4};
    cout << fixed << setprecision(3) << floorSqrt1(7) << endl;
}