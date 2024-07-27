#include<iostream>
using namespace std;
int getSize(int arr[]){
    int fullS = sizeof(&arr);
    int count = 0;
    for(int i = 0;i<fullS;i++){
        if(i!=0 && arr[i] != 0){
            count +=1;
        }
        else if(i == 0 && arr[i] == 0){
            count +=1;
        }
    }
 
    return count;
}
int getMin(int arr[],int starting_index,int s){
    int mini = INT_MAX;
    int index = starting_index;
    for(int i = starting_index;i<s;i++){
        if(mini > arr[i]){
            mini = arr[i];
            index = i;
        }
    }
    return index;
}
void selectionSort(int arr[],int n){
    //putting smaller element into its right place:it may or may not be stable
    for(int i = 0;i<n-1;i++){
        int miniElement = getMin(arr,i,n);
        if(arr[i] > arr[miniElement]){
            int t = arr[i];
            arr[i] = arr[miniElement];
            arr[miniElement] = t;
        }
    }
}
void stableSelectionSort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        int miniIndex = i;
        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[miniIndex]){
                miniIndex = j;
            }
        }
        // swap(arr[miniIndex],arr[i]);
        //to make it stable we have to move the elements to the right from miniIndex
        int key = arr[miniIndex];
        for(int k = miniIndex;k>i;k--){
            arr[k] = arr[k-1];
        }
        arr[i] = key;
    }
}
void bubbleSort(int arr[],int n){

    //rounds
    for(int i = 0;i<n-1;i++){
        bool flagSwapped = false;
        // if swapping is done
        //elements of array at each round
        for(int j = 0;j<n-i-1;j++){
            if(arr[j] >= arr[j+1]){
                flagSwapped = true;
                cout << "SWAP" << endl;
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
        if(flagSwapped == false){
            break;
        }
    }
}

void insertionSort(int arr[],int n){
    int currentJ = 0;
    for(int i = 1;i<n;i++){
        int temp = arr[i];
        for(int j = i-1;j>=0;j--){
            currentJ = j;
            if(arr[j] >= temp){
                //shift-right
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
    
        }
        arr[currentJ+1] = temp;

    }
}
int main()
{              
    int arr[] = {0,10,8,11,22,9,7,7};
    int s = 8;
    cout << s<< endl;
    int t = 0;
    int arr2[s+1];
    // for(int i = 0;i<s;i++){
    //     arr2[i] = arr[i];
    // }
    //insert 56 at first index arr
    // for(int i = s;i>=0;i--){
    //     arr2[i] = arr2[i-1];
    // }
    // arr2[0] = 56;

    //insert 99 at mid
    for(int i = 0;i<s;i++){
        arr2[i] = arr[i];
    }
    int s1 = s+1;
    int mid = s1/2;
    cout << "mid = " << mid <<endl;
    for(int j = s1;j>mid;j--){
        arr2[j] = arr2[j-1];
    }
    arr2[mid] = 99;
    cout << "After Sorting" << endl;
    // stableSelectionSort(arr2,s1);
    // for(int i = 0;i<s1;i++){
    //     cout << arr2[i] << endl;
    // }
    // Note: Selection sort may or may not be stable : t-c::worst-case = O(n ** 2) and best-case = O(n**2)

    insertionSort(arr2,s1);
    for(int i = 0;i<s1;i++){
        cout << arr2[i] << endl;
    }

}