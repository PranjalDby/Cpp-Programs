#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n)
{
    /*
    Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The process is repeated until the list is sorted. It's called "Bubble Sort" because smaller elements "bubble" to the top of the list.
    */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void selectionSort(int *arr, int n)
{
    /*
    Selection sort is a simple comparison-based sorting algorithm. It works by repeatedly selecting the smallest (or largest, depending on the order) element from the unsorted portion of the array and moving it to the beginning (or end) of the sorted portion
    */
    for (int i = 0; i < n; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[mini] > arr[j])
            {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }
}

void insertionSort(int *arr, int n)
{
    /*
    Insertion Sort is a simple sorting algorithm that builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.
    */
    for (int i = 1; i < n; i++)
    {
        // we assume that first elment in arr is sorted.
        int key = arr[i];
        int j = i - 1;
        bool flag = 1;
        while (j >= 0 && arr[j] > key)
        {
            // right shift the larger element
            arr[j + 1] = arr[j];
            j--;
            flag = 0;
        }
        if (flag == 1)
        {
            cout << "Already Sorted\n";
            break;
        }
        // put the smaller element in sorted part of array
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {10, 2, 6, 11, 9, 5, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    // bubbleSort(arr, n);
    selectionSort(arr, n);
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}