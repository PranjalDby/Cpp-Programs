#include<iostream>
#include<cmath>
#include <cstring>
using namespace std;

void pointers() {
    constexpr int var = 20;
    cout << "Memory address of variable Var = " << &var <<  endl;
    int const *ptr = &var; // now our pointer ptr points to the memory address of var
    cout << "Pointer to the variable = " << ptr << endl;
    cout << "Accessing the value stored at memory addr = " << *ptr << endl;
}

// passing args to the functions

//pass-by-value
void add(int const num1,int const num2) {
    // copy of variable is created
    int const a_dd = num1 + num2;
    cout << "Sum of two number is (Pass-by-Value ) = " << a_dd << endl;
}

//pass-by-reference with pointer(*) argument
void square(int *num) {
    //base address of value is given as argument
    cout << "Address of num in func = " << num << endl;
    *num = pow(*num,2);//NOLINT;
    cout << "Square of num = " << *num << endl;
}
//pass-by-reference with reference(&) argument
void cube(int &n) {
    //base address of value is given as argument
    cout << "Address of num in cube funct = " << &n << endl;
    n = pow(n,3); // NOLINT(*-narrowing-conversions)
    cout << "cube of num = " << n << endl;
}

void arraysVSPointers() {
    int arr[] = {10,20,40,50};
    cout << "Here name of arr is pointer to the first element of an array = " << arr << endl;
    cout << "Verify this by dereferencing the value of arr = " << *arr << endl;
    int *p = &arr[0];
    cout << *p << endl;
    cout << "First Element = " << p[0] <<
        "    Second Element = " << p[1] <<
            "\tThird Element = " << p[2] << endl;
}
int main() {
    cout << "Pointers in C++" << endl;
    pointers();
    add(20,40);
    int n = 20;
    int *ptr = &n;
    cout << "Address of n in main funct = " << ptr << endl;
    square(ptr);
    cout << "Address of n in main funct = " << ptr << endl;
    cube(*ptr);//passing the value or reference
    //Array vs Pointer
    arraysVSPointers();
    // ---------------------------------------pointers arithmetics------------------------------------------
    // pointer arithmeticis meaningless unless performed on array./

    int a = 45;
    int *p = &a;
    cout << "Before pointer increment = " << a << endl;
    p++;
    cout << "After pointer increment = " << *p << endl;

    int arr[] = {10,20,50,100};
    int *pp = arr; //pointing to the first element of array
    cout << "Memory address of first element = " << *pp << endl;
    // applying pointer arithmetic to the pointer to the array
    // pointer increment.
    pp++;
    cout << "incrementing the pointer artithmetic = " << *pp<< endl;
    // pointer decrement.
    pp--;
    cout << "decrementing the pointer arithmetic = " << *pp << endl;

    //travering through the array using pointer arithmetics

    // for(int i = 0;i<4;i++) {
    //     cout << *pp << endl;
    //     pp++;
    // }

    // adding or subtracting integer from pointer
    pp = pp+0;
    for(int i = 1;i<3;i+=1) {
        pp = (pp + i);
        cout << *pp << endl;
    }

    //2Dimensional array
    int mat[2][4] = {
        {10,17,40,3},
        {23,33,11,-2}
    };
    ptr = *mat; // it points to the element of first row and first col
    //get me element 2-r 3-c
    // cout << "value of matrix[1][2] = " <<(*(ptr+5))<< endl;
    //better-approach
    //using array name as pointer
    int r = std::size(mat);
    int c = std::size(mat[0]);
    for(int i = 0;i<r;i++) {
        for(int j = 0;j<c;j++) {
            printf("value at mat[%d][%d] = %d\n",i,j,*(*(mat + i) + j));
        }
    }

    //----------------------- pointers to pointers ------------------------------------------------------------

    char *name = "Pranjal Dubey"; // pointer to string literal('null-terminated char array')
    char **info = &name; // pointer to the pointer(of string literal)
    cout << name << endl;;
    //applying pointer arithmetic to it
    cout << "string literal length = " << std::strlen(name) << endl;
    for(int i = 0;i<std::strlen(name);i++) {
        cout << *name << " ";
        name+=2;
    }
    cout << " " <<endl;
    cout << "name points to = " << name << endl;

    // ----------------------------------------------------------- void pointers ---------------------------------------------------------------------------------
    string info1 = "Pranjal k";
    char ch = 'A';
    void *anyPoint = &ch; // void pointer pointing to the string
    char *toStr = static_cast<char *>(anyPoint);//type casting any pointer to the char *
    cout << "before incrmementing " << *toStr << endl;;
    // *toStr++; // here ++ is the postfix increment operator.so it derefrence the value and then increment the pointer;
    (*toStr)++;
    cout << "value of toStr Pointer = " << *toStr << endl;
    cout << ch<< endl; // throws error

    // ------------------------------------------------------------- invalid pointers --------------------------------------------------------------------------------
    int roll[] = {101,102,103,104,105};
    int *ro = roll;
    for(int i = 0;i<6;i++) {
        cout << "Roll no = " << *ro << endl;
        //pointer arithmetic
        ro++;
    }
}
