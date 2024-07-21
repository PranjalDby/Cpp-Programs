#include<iostream>

using namespace std;

void test(int* n){
    *n = *n + 1;
    cout << "Vlu of n  = " << *n << endl;
}
int main(){
    //pass by value: copy of variable is send

    int n = 10;
    test(&n); //pass by reference
    cout << "current value of n = " << n << endl;

    //-------------------------------------------- Arrays in cpp ------------------------------------------------------------------------------

    int array[100] = {1};
    int size = sizeof(array)/sizeof(array[0]);
    cout << size << endl;
    fill_n(array,size,1); // filling an array with 1;
    for(int i = 0;i<size;i++){
        // array[i] = 1;
        cout << array[i] << endl;
    }
}