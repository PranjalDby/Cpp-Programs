#include <iostream>
using namespace std;

// 1) To access a global variable when there is a local variable with same name

int x = 101; // global-variable

// 2) To define a function outside a class.
class ABC
{
public:
    // only declaration
    void fun();
};

// definition of function outside the class using scope resolution ::
void ABC::fun()
{
    cout << "Doing Fun Haa... 😊" << endl;
}

// 3) to Access the Classes Static Variables
class Test
{

public:
    static int x;
    static int Y;
    void func(int x)
    {
        cout << "Value of Static x is " << Test::x;
        cout << "\nValue of local x is " << x;
    }
};

// in C++ static members must be explicitly defined
int Test::x = 501;
int Test::Y = 101;

// in case of multiple inheritance: if the same variable Name exist in two ancestor classes,we can use scope resolution operator.

class A
{
protected:
    int x;

public:
    A()
    {
        x = 10;
    }
};

class B
{
protected:
    int x;

public:
    B()
    {
        x = 20;
    }
};
class C : public A, public B
{
protected:
    int x;

public:
    void fun()
    {
        cout << "A's x is " << A::x << endl;
        cout << "B's x is " << B::x << endl;
    }
};
// 5) For NameSpace: if a class Having the same Name exist inside the two nameSpaces we can use the nameSpace Name with Scope resol.

// global declaration
string name1 = "GFG";
string favlang = "python";
string companyName = "GFG_2.0";

class Developer
{
public:
    string name = "krishna";
    string favLang = "c++";
    string company = "GFG";

    // Accessing Global Declarations

    Developer(string favlang, string companyProvider)
        : favLang(favlang), company(companyProvider) // direct initialization of data members before constructor body executes
    {
    }
};

int main()
{
    int x = 3042; // local-variable
    cout << "global Scope Variable x = " << ::x << endl;

    ABC abc;
    abc.fun();

    Test obj;
    obj.func(40);
    cout << "\n";

    C cc;
    cc.fun();

    Developer dev = Developer("python", "LOKX AI");

    cout << "favourite language = " << dev.favLang << endl;
    cout << "company Name : " << dev.company << endl;

    return 0;
}