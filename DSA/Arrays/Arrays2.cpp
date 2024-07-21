#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <map>

using namespace std;

int getSize(int arr[], int size)
{
    int res = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            res++;
        }
    }
    return res;
}
void update(int arr[], int size, int index)
{
    // we provide the base address which is hold by the array name,'in our case arr'.
    if (index < size)
    {
        arr[index] = 255;
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
int returnSum(int arr[], int s)
{
    int sum = 0;
    for (int i = 0; i < s; i++)
    {
        sum += arr[i];
    }
    return sum;
}
bool found(int arr[], int s, int searchElement)
{
    int flag = 0;
    for (int i = 0; i < s; i++)
    {
        if (searchElement == arr[i])
        {
            flag = 1;
            break;
        }
    }

    return flag ? true : false;
}

int foundBinaryIndex(int arr[], int size, int element)
{   int end = size-1;
    int start = 0;

    int mid = start + (end - start) / 2;

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
        mid = start + (end-start) / 2;
    }

    return -1;
}
void reverseArray(int arr[], int firstIndex, int lastIndex)
{
    if (firstIndex > lastIndex | firstIndex == lastIndex)
    {
        return;
    }
    int temp = arr[firstIndex];
    arr[firstIndex] = arr[lastIndex];
    arr[lastIndex] = temp;
    reverseArray(arr, firstIndex + 1, lastIndex - 1);
}
void reverseArrayIter(int arr[], int s)
{
    int i = 0;
    int n = s;
    while (i <= n)
    {
        int temp = arr[i];
        arr[i] = arr[n];
        arr[n] = temp;
        i += 1;
        n -= 1;
    }
}

void swapAlter(int arr[], int s, int i, int j)
{
    if (j >= s or i >= j)
    {
        return;
    }
    // swap

    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
    swapAlter(arr, s, j + 1, j + 2);
}
void swapAlterIter(int arr[], int s)
{
    for (int curr = 0; curr < s; curr += 2)
    {

        // alternate
        if (curr + 1 < s)
        {
            swap(arr[curr + 1], arr[curr]);
        }
        // for(int next = curr+1;next < s;){
        //     swap(arr[next],arr[curr]);
        //     break;
        // }
    }
}
int uniqueElement(int arr[], int n, int curr, int prev)
{

    if (curr == n)
    {
        return arr[prev];
    }
    if (prev != -1 && arr[curr] != arr[prev])
    {
        int ans = arr[prev];
        return ans;
    }

    curr += 2;
    prev = curr - 1;
    return uniqueElement(arr, n, curr, prev);
}
// Using XOR
int uniqueElementXor(int *arr, int size)
{
    int res = 0;
    for (int i = 0; i < size; i++)
    {
        res = res ^ arr[i];
    }
    return res;
}

bool uniqueOccurances(vector<int> &arr)
{
    map<int, int> hashMap,secondMap;
    //counting the no of occurances
    for (auto &i : arr)
    {
        hashMap[i]+= 1 ;
    }
    for(auto &k:hashMap){
        // no two count of occurances are same
        secondMap[k.second]+=1;
        if(secondMap[k.second] > 1){
            return false;
        }
    }
    return true;
}



int main()
{
    int arr[20] = {1, 2, 3, 4, 6, 7, 12, 121};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Size of an Array = " << getSize(arr, size) << endl;

    char ch[] = {'a', 'b', 'c', 'r', 'e', 'g'};
    // cout << ch[3] << endl;
    // // cout << "Get char array = " << getSize(ch,sizeof(ch)/sizeof(ch[0]));
    // cout << "Updating Element in array = " << endl;
    // update(arr, size, 3); // yes, it updates the element
    // for (int i = 0; i < getSize(arr, size); i++)
    // {
    //     cout << arr[i] << endl;
    // }

    int s = 0;
    // cout << "Size = " << endl;
    // cin >> s;
    // cout << s << endl;
    // int array[s];
    // cout << "Enter the Elements: " << endl;
    // for (int i = 0; i < s; i++)
    // {
    //     cin >> array[i];
    // }
    // printArray(array,s);
    // cout << returnSum(array,s)<<endl;

    // Linear Search ----------------------------------------------------------------------

    int items[] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    s = getSize(items, sizeof(items) / sizeof(items[0]));
    // cout << s << endl;
    int e;
    // cin>>e;
    // if(found(items,s,e)){
    //     cout << "Found" << endl;
    // }
    // else{
    //     cout << "Not found "<<endl;
    // }
    s = 0;
    int sortedArr[] = {1, 2, 7, 8, 5, 9, 11};
    s = getSize(sortedArr, sizeof(sortedArr) / sizeof(sortedArr[0]));
    // cout << "s = " << s << endl;
    e = 0;
    // cin >> e;
    // if(foundBinaryIndex(sortedArr,s,e)){
    //     cout << "Found";
    // }
    // else{
    //     cout << "Not Found";
    // }
    // reverseArray(sortedArr, 0, s - 1);
    // reverseArrayIter(sortedArr,s-1);
    // swapAlterIter(sortedArr,s);
    // printArray(sortedArr, s);

    int unique[] = {2, 3, 1, 6, 3, 6, 2};
    size = getSize(unique, sizeof(unique) / sizeof(unique[0]));
    // sort(unique, unique + size);
    // cout << uniqueElement(unique, size, 1, 0) << endl;

    vector<int>occurr = {1,2,2,3,3,3,4,4,4,4,5,5,5,5,5};
    // cout << uniqueOccurances(occurr) << endl;
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,15,16};
    cout << "ODD " << foundBinaryIndex(odd,5,16) << endl;
    cout << "EVEN " << foundBinaryIndex(even,6,6) << endl;
}