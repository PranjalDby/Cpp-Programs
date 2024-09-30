#include <iostream>
using namespace std;

// function returning pointer to the local variable
int *returnPtr()
{
    int c = 245;
    return &c; // warning;
}
int main()
{
    // Dangling Pointer:A pointer pointing to the memory location that has been free or deallocated
    /// Ex-1
    // int *ptr = (int *)malloc(sizeof(int));
    // free(ptr);
    // printf("Memory freed\n");

    /// Ex-2:Error
    // int *p = returnPtr();
    // fflush(stdin);
    // cout << *p << endl;
    return 0;
}