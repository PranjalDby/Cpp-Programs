#include <iostream>
#include <math.h>
#include <vector>
#include <iomanip>
#include<algorithm>
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
    cout << "AN" << actual << endl;
    return actual;
}

// Advanced Binary search questions

bool isPoss(vector<int> &t, int n, int m, int mid)
{
    long long int nChap = 0;
    long long int ndays = 1;

    for (int i = 0; i < n; i++)
    {   
        //if sum of no of chapters is less than equal to mid
        if (nChap + t[i] <= mid)
        {
            nChap += t[i];
        }
        else
        {
            ndays++;
            if (ndays > n || t[i] > mid)
            {
                return false;
            }

            nChap = 0;
            nChap += t[i];
        }
    }
    return true;
}
long long int sol(vector<int> &time, int n, int m)
{
    int ans = -1;
    if (n > m)
    {
        return ans;
    }
    long long int s = 0;
    long long int sum = 0;
    for (long long int i : time)
    {
        sum += i;
    }
    long long int e = sum;
    // BS
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPoss(time, n, m, mid))
        {   
            // sol-exists,hence move to left part
            ans = mid;
            e = mid - 1;
        }
        else
        {   //no-sol exists move to right-part
            s = mid + 1;
        }
    }
    return ans;
}

bool isPossible(vector<int>&stalls,int max,int cows,int mid){
    int cowCount = 1;
    int lastPos = stalls[0];
    for(int i = 0;i<stalls.size();i++){
        if(stalls[i]-lastPos >= mid){
            cowCount +=1;
            if(cowCount == cows){
                return true;
            }
            lastPos = stalls[i];
        }
    }
   return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end()); // nlog(stalls.size())
    int s = 0;
    int max = stalls[stalls.size()-1];
    // for(int i = 0;i<stalls.size();i++){
    //     if(stalls[i] > max){
    //         max  = stalls[i];
    //     }
    // }
    int e = max - 1;// we do this becuase we don't our mid to goto out of range of our possible distances
    int ans = -1;
    //BS
    int mid = s + (e-s)/2;
    while(s <= e){

        if(isPossible(stalls,max,k,mid)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int helper(vector<int>&heights,int mid,int r,int n){
    int cutted = mid;
    int ans = 0;
    for(int i = 0;i<n;i++){
        if(heights[i] > mid){
            ans += heights[i]-mid;
            if(ans >= r){
                return true;
            }
        }
    }
    return false;
}
int ekoEko(vector<int>&arr,int r,int n){
    int s = 0;
    int max = INT_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    int e = max;
    int mid = s + (e-s)/2;
    int ans = 0;
    while(s<=e){
        if(helper(arr,mid,r,n)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
bool isPossibleToCookM(vector<int>&rank,int mid,int m){
    int foodCooked = 0;
    for(int i = 0;i<rank.size();i++){
        int cook = 1;
        int min = cook * rank[i];
        while(min <= mid){
            foodCooked +=1;
            cook+=1;
            min += rank[i] * cook;
        }
    }
    if(foodCooked >= m){
        return true;
    }
    return false;
}
int minimumTimeCook(vector<int>&rank,int m){
    int s = 0;
    int maxi = rank[rank.size()-1];
    int e = 0;
    for(int i = 1;i<=m;i++){
        e += i * maxi;
    }
    int mid = s + (e-s)/2;
    cout << mid << endl;
    int ans = -1;
    while(s<=e){
        if(isPossibleToCookM(rank,mid,m)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main()
{   
    // int n,m;
    // cin >>n>>m;
    // vector<int>arr(n);
    // for(int i = 0;i<n;i++){
    //     cin >> arr[i];
    // }
    vector<int>arr = {1,2,3,4};
    // cout << ekoEko(arr,7,4);
    // long long ans  = 0;
    int ans  = minimumTimeCook(arr,11);
    cout << ans << endl;
}