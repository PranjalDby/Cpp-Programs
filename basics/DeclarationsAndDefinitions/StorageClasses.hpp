#pragma once

#include<cstring>
// int defineRegisterStorageClass(){
//     register int value;
//     return value;
// }

// Scopes

// declaring static data member
class ShowStatic{
    public:
    static string userName;
    int rollNo;
};


// // statically declared local variable in a member function

struct C
{
    public:
    void Test(int value){
        static int var = 0;
        if(var == value){
            cout << "var == value" << endl;
        }
        else{
            cout << "var != value" << endl;
        }
        var = value;
    }
};

//Example shows how a variable declared static in a function retains its state between calls to that function

void showStat(int curr){
    static int nStatic; // value of nStatic is retained
                        // between each function call

    nStatic += curr;
    cout << "nstatic is " << nStatic << endl;
}

// ------------------------------------------------------------------------------------------------------------------------

// ------------------------------------------ thread_local (C++ 11) 0------------------------------------------------------


thread_local float f = 42.0; // Global namespace. Not implicitly static

struct S{
    // thread_local int i; // Illegal. The member must be static
    thread_local static char buf[10]; //ok
}; // cannot be applied to type definition

void DoSomething(){
    //Apply thread_local to a local variable.
    // Implicitily "thread_local static S my_struct"
    thread_local S my_struct;
}

//automatic vs. static initialization

//Define a class that logs initializations and destructions.

class InitDemo{
    public:
        InitDemo(const char *szWhat);
        ~InitDemo();
    
    private:
        char *szObjName;
        size_t sizeofObjName;
};

// Constructor for class InitDemo
InitDemo::InitDemo(const char *szWhat):
    szObjName(NULL),sizeofObjName(0){
        if(szWhat != 0 && strlen(szWhat) > 0){
            //Allocate storage for szObjName, then copy
            // initializer szWhat into szObjName,using 
            // secured CRT
            sizeofObjName = strlen(szWhat) + 1;
            szObjName = new char[sizeofObjName];
            strcpy_s(szObjName,sizeofObjName,szWhat);

            cout << "Initializing: " << szObjName << "\n";
        }
        else{
            szObjName = 0;
        }
    }

// Destructor for InitDemo

InitDemo::~InitDemo(){
    if(szObjName != 0){
        cout << "Destroying: " << szObjName << "\n";
        delete szObjName;
    }
}


// ---------------------------------- auto Storage Class ----------------------------------------------------

const string VERS = "3.2.1";