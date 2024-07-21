#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm> // Add this line to include the <algorithm> header
#include <set>

using namespace std;

int findDuplicate(vector<int> &arr)
{
    int tortoise = arr[0];
    int hare = arr[0];
    while (true)
    {
        tortoise = arr[tortoise];
        hare = arr[arr[hare]];
        if (hare == tortoise)
        {
            break;
        }
    }

    hare = arr[0];
    // traversing from first index to the index where cycle found
    while (tortoise != hare)
    {
        tortoise = arr[tortoise];
        hare = arr[hare];
    }

    return hare;
}
int findDuplicate2(vector<int> &arr)
{
    vector<int> ans;
    for (auto &i : arr)
    {
        i = abs(i);
        cout << i << endl;
    }
    return 0;
}

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> res;
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            res.push_back(arr1[i]);
            i++, j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return res;
}

void sorted(vector<vector<int>> &res)
{
    sort(res.begin(), res.end());
}
void printArr(vector<vector<int>> &r)
{
    for (auto &i : r)
    {
        for (auto &j : i)
        {
            cout << j << endl;
        }
    }
}
void pairSum(vector<int> &arr, int t)
{
    vector<vector<int>> res;
    int i = 0;
    while (i < arr.size())
    {
        int j = i + 1;
        while (j < arr.size())
        {
            if (arr[i] + arr[j] == t)
            {
                if (arr[i] < arr[j])
                {
                    res.push_back(vector<int>{arr[i], arr[j]});
                }
                else
                {
                    res.push_back(vector<int>{arr[j], arr[i]});
                }
            }
            j++;
        }
        i++;
    }
    sorted(res);
    printArr(res);
}
vector<vector<int>> tripletSum(vector<int> &arr, int t, int n)
{
    vector<vector<int>> res;
    int i = 0;
    sort(arr.begin(), arr.end());
    set<vector<int>> uniqueTriplets; // Use a set to store unique triplets
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == t)
                {
                    vector<int> r = {arr[i], arr[j], arr[k]};
                    uniqueTriplets.insert(r); // Insert the triplet into the set
                }
            }
        }
    }
    // Copy the unique triplets from the set to the result vector
    for (const auto &triplet : uniqueTriplets)
    {
        res.push_back(triplet);
    }
    return res;
}
void sortedArr(int * arr,int n){
    int i = 0;
    int j = n-1;
    //sorted zero
    while(i<=j){
        if(arr[i] == 0){
            i++;
        }
        else if(arr[j] != 0){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
        }
    }
  
    j = n-1;
    while(i<=j){
        if(arr[i] == 1){
            i++;
        }
        else if(arr[j] == 2){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
        }
    }
}
void printArr(int *arr,int n){
    for(int i = 0;i<n;i++){
        cout << arr[i] << endl;
    }
}


int binarySearchRec(vector<int>arr,int element,int mid){
    int n = arr.size()-1;

    if(element == arr[mid]){
        return mid;
    }

    if(element != arr[mid] && mid >= n){
        return -1;
    }
    int ans = -1;
    if(element > arr[mid]){
        mid = (( mid + 1) + n) / 2;
        ans = binarySearchRec(arr,element,mid);
    }
    else{
        mid = (0 + (mid-1))/2 ;
        ans = binarySearchRec(arr,element,mid);
    }

    return ans;
}
int binarySearch(vector<int>arr,int element){
    
    int end = arr.size()-1;
    int start = 0;

    int mid = start + (end-start)/2; // (start + end)/2 this cause a value that is above the range of int

    while(start<=end){
        if(arr[mid] == element){
            return mid;
        }
        else if(element > arr[mid]){
            start = mid+1;
           
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }

    return -1;
}

pair<int,int> firstAndLastPosition(vector<int>& arr,int n,int k){

    pair<int,int> res = {-1,-1};

    //for-left most occurances
    int start = 0;
    int end = n-1;
    int ans = -1;
    while (start <= end){
        int mid = start + (end - start) / 2;

        if(k > arr[mid]){
            start = mid + 1;
        }
        else if(k < arr[mid]){
            end = mid-1;
        }
        else{
            ans = mid;
            end = mid-1;
        }
    }

    //right-most occurances
    start = ans;
    end = n-1;
    int ans2 = -1;
    while (start <= end){
        int mid = start + (end - start) / 2;

        if(k > arr[mid]){
            start = mid + 1;
        }
        else if(k < arr[mid]){
            end = mid-1;
        }
        else{
            ans2 = mid;
            start = mid+1;
        }
    }
    res.first = ans;res.second = ans2;
    return res;
}
int totalOccurances(vector<int>& arr,int n,int k){

    //for-left most occurances
    int start = 0;
    int end = n-1;
    int ans = 0;
    int count = 0;
    while (start <= end){
        int mid = start + (end - start) / 2;

        if(k > arr[mid]){
            start = mid + 1;
        }
        else if(k < arr[mid]){
            end = mid-1;
        }
        else{
            ans = mid;
            end = mid-1;
        }
    }

    //right-most occurances
    start = ans;
    end = n-1;
    int ans2 = 0;
    while (start <= end){
        int mid = start + (end - start) / 2;

        if(k > arr[mid]){
            start = mid + 1;
        }
        else if(k < arr[mid]){
            end = mid-1;
        }
        else{
            ans2 = mid;
            start = mid+1;
        }
    }
   
    //return occurances
    return ans2 - ans + 1;
}

int solve(vector<int>&arr){

    int start = 0;
    int end = arr.size()-1;

    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] < arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        if(start == end){
            break;
        }
        
    }

    return start;

}
int pivotIndex(vector<int>& nums) {
    vector<int>prefixS;
    int sum = 0;
    int lsum = 0;
    for(int i = 0;i< nums.size();i++){
        sum = sum + nums[i];
    }
    for(int i = 0;i<nums.size();i++){
        if(lsum == (sum - lsum -nums[i])) return i;
        lsum += nums[i];
    }
    return -1;
}
int main()
{

    vector<int> array = {10,5,5,5,2};
    int t = 12;
    // vector<vector<int>> r = tripletSum(array, t, array.size());
    // printArr(r);

    int arr[] = {0,1,2,2,1,0};
    // sortedArr(arr,6);
    // printArr(arr,6);

    vector<int>sortedA = {5,2,9,13,29,201};
    int key = 200;
    int mid = (sortedA.size() - 0) / 2;
    // cout << "Index = " << binarySearchRec(sortedA,key,mid) << endl;
    // cout << "Index iter = " << binarySearch(sortedA,key);

    vector<int> rr = {1,7,3,6,5,6};
    int r = pivotIndex(rr);
    cout<< r<<endl;
}