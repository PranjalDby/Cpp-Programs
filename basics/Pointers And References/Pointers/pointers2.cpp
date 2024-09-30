// --------------------- NULL POINTERS IN CPP --------------------------
#include <iostream>
#include <memory>
using namespace std;

int global = 5000;
int *fun()
{
    global = 3000;
    // to-solve the issue of dangling pointer we need to define the local as static variable(internal
    std::cout << "Local Variable = " << global << endl;
    return &global;
}

shared_ptr<int> getSmartPtr()
{
    return make_shared<int>(42); // return a smart pointer object;
}

int *getPointer()
{
    // allocate on the heap
    int *localVar = new int(49); // we need to manually de-allocate the memory
    return localVar;
}

int &getReference()
{
    // Use Static to extend the life time
    static int localVar = 20;
    return localVar;
}

// Example of void pointer
void f(int *pi)
{
    void *pv = pi;                          // implicit conversion from int* to void*
    int *pi2 = reinterpret_cast<int *>(pv); // converts the one pointer type to another pointer type
    cout << *pi2 << endl;
}
void CallBackFunction(void *data, char datatype)
{
    switch (datatype)
    {
    case 'i':
        cout << "Callback for int: " << *(int *)data << endl;
        break;

    case 'd':
        cout << "Callback for double: " << *(double *)data << endl;
        break;
    }
}
void takeCallback(void *data, char datatype, void (*callback)(void *, char))
{
    callback(data, datatype);
}
int main()
{
    cout << "null pointer in cpp" << endl;
    // declaring a null pointer
    int *ptr = NULL;
    // to-check a pointer is a null we have to use isequal to operator (==)
    //  derefencing only if the pointer have any value
    if (ptr == NULL)
    {
        printf("Pointer does not point to anything,but NULL \n");
    }
    else
    {
        printf("Value pointed by pointer: %d", *ptr);
    }

    // ----------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // Dangling(de-allocated memory),void(pointing to the data with unspecified type),null (pointing to the invalid memory location),wild(pointing to the unitialized memory block)

    // Dangling Pointer:
    /*
     * There are three Different ways where a pointer act as dangling pointer:
     * De-allocation of Memory
     */

    // De-allocation of Memory

    // creating a memory block
    int *intMemory = new int(40); // allocating a memory
    // After below free call, ptr becomes a dangling pointer
    // delete intMemory; // Remove this line
    free(intMemory);
    printf("Memory freed\n");

    // ------------------------------------------- function-call --------------------------------------------------------------------------
    int *dangling = fun();
    // dangling pointer;because the function return the address of unallocated memory blockIn the above example, p becomes dangling as the local variable (x) is destroyed as soon as the value is returned by the pointer. This can be solved by declaring the variable x as a static variable as shown in the below example.
    // cout << *dangling << endl; //throws error

    // after resolution
    std::cout << dangling << endl;

    // Dangling Pointer created by accessing Variable Out of Scope
    int *danglingPtr;
    // block scope
    {
        int var = 210;
        danglingPtr = &var;
    };
    printf("Value of Dangling pointer:%d\n", *danglingPtr); // it should throw an exception but in my case.my compiler wouldn't be strict enough to through the error

    // -----------------  handling a dangling pointer ---------------------------------------
    // 1.Assign NULL or nullptr to the pointers that are not in use

    int *value = new int(11); // allocated the memory
    // freeing it
    delete value;

    // assigning null
    value = nullptr;

    // checking the null before accessing the value

    if (value == nullptr)
    {
        cout << "Memory is deallocated" << endl;
    }
    else
    {
        cout << "value: " << value << endl;
    }

    // --------------------------------- Using Smart pointers ---------------------------------------

    shared_ptr<int> sharedPtr = getSmartPtr();
    cout << "Value  = " << *sharedPtr << endl;

    // ------------------ Use Dynamic Memory Allocation for the local variables that are to be returned.
    int *ptrs = getPointer();
    cout << "Value: " << *ptrs << endl;
    // manually deallocating it
    delete ptr;
    // setting ptr = null
    ptr = nullptr;

    // ---------------------------- Using references instead of pointers ---------------------------------------------------
    int &ref = getReference();
    cout << "Value = " << ref << endl;

    // ----------------------------------------- void pointers ---------------------------------------------------------------
    int a = 10;
    void *voidPtr = &a; // pointing to the address of int 'a'
    cout << voidPtr << endl;
    // to access the void* we must need to explicitly convert to it to a specifyc type
    int *toInt = static_cast<int *>(voidPtr);
    cout << "Value of pointer = " << *toInt << endl;
    int roll = 3001;
    f(&roll);
    cout << "Using void* in callback............" << endl;
    takeCallback(&roll, 'i', &CallBackFunction);
    return 0;
}
