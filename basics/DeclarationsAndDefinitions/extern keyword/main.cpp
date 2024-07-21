#include <iostream>
#include "extern_helpers.hpp"
#include "fileA.cpp"
#include <complex>
using namespace std;

/**
 * @brief print's the information about extern kefword
 * @details providing details about the function
 * @note it doesn't not return anf value,it just a common method and it also not take any parameters
 */
void info()
{
    std::cout << "extern Keyword specifies that the a global variable or\n function has external linkage" << std::endl;
}

extern const double PI;
// int i = 10; //redefinition of int i: linker error
// non-const global variable
extern int i;
extern const int PROJECT_ID;

/**
 * Some Thought's About Scope Resolution Operator(::)... we use scope resolution operator when we want to access global variable named same as local variable defined in that scope.
 * to define a function outside of class.
 * to access a class's static variables.
 * in case of multiple inheritance
 */

// define a function outside a class
class A
{
public:
    void fun();
};

// definition outside a class
void A::fun()
{
    cout << "Yeah U have a Fun." << endl;
}

// accessing a class's static variables

class Test
{
    static int x;

public:
    static int y;
    // Local parameter 'x' hides class member
    // 'x', but we can access it using ::
    void func(int x)
    {
        // We can access class's static variable
        // even if there is a local variable
        cout << "Value of static x is " << Test::x;

        cout << "\nValue of local x is " << x;
    }
};
int Test::x = 1;
int Test::y = 32;
int x = 101;

// multiple inheritance

class AA
{
protected:
    int x;

public:
    AA()
    {
        x = 10;
    };
};

class BB
{
protected:
    int x;

public:
    BB()
    {
        x = 34;
    };
};

class C : public AA, public BB
{

public:
    void fun()
    {
        cout << "A's x is = " << AA::x << endl;
        cout << "B's x is = " << BB::x << endl;
        ;
    }
};

// for namespace

string name = "Pranjal";
string fav_lanf = "python";

class Dev
{
public:
    string name = "krishna";
    string favLang = "c++";
    string company = "GFG";
    // Accessing Global Declartations
    Dev(string favLang, string company) : favLang(favLang), company(company){};
};

// Refering to a class inside another class:if a class exist inside another class we can use the nesting class to refer the nested class using (::)

class outside
{
public:
    int x;
    class inside
    {
    public:
        int x;
        static int y;
        int foo();
    };
};

int outside::inside::y = 5;

// Refer to member of the base class in derived object

class Base
{
public:
    void foo()
    {
        cout << "This is a base class" << std::endl;
    }
};

class Derived : public Base
{
public:
    void foo()
    {
        std::cout << "This is a Derived class" << endl;
    }
};

// Some-hand's on UDls...

long double operator"" _kg(long double v)
{
    return v * 1000;
}

long double operator"" _lb(long double x)
{
    return x * 2.204;
}

// imaginery literal
constexpr complex<double> operator"" _i(long double d)
{
    return complex<double>{0.0, static_cast<double>(d)};
}

// string_literals

string operator"" _moj(const char *ch)
{
    const string &res = ch;
    string up = res;
    up += "🤣";
    return up;
}
constexpr int increase(int x){
        return x * 10;
}
int main()
{
    info();
    std::cout << PI << std::endl;
    std::cout << cppName << std::endl;
    std::cout << i << std::endl;
    std::cout << PROJECT_ID << std::endl;

    std::cout << "Uses of Scope Resolution operator." << std::endl;

    int x = 10;
    std::cout << "value of global x is " << ::x << std::endl;

    std::cout << "value of local x is " << x << std::endl;

    A a;
    a.fun();

    // accessing class's static var;

    Test s;
    s.func(x);
    cout << "\n Test::y " << Test::y << endl;

    // multiple inheritance

    C c;
    c.fun();

    // For namesapce: if a class having the same name exists inside two namespaces we can use the namespace name with the scope resolution operator to refer that class without any conflicts.

    Dev obj = Dev("Python", "MistralAi");
    cout << obj.favLang << endl;
    cout << "company Name: " << obj.company << endl;

    // Nested-class
    outside A;
    outside::inside B;
    B.x = 30;
    cout << B.y << endl;
    cout << B.x << endl;

    // Base-class

    Derived bb;
    bb.foo(); // derived class
    bb.Base::foo();

    cout << "Some Hand's on UDLs.............................." << endl;
    double res = 34.3_kg / 2.2_lb;
    cout << res << endl;

    // imaginery

    complex<double> z = 3.0 + 4.2_i;
    cout << z << endl;
    complex<double> y = 2.3 + 5.0_i;
    cout << "z+y = " << z + y << endl;
    cout << "z * y = " << z * y << endl;

    // printing the size of Primitive data types
    string sizes[] = {"signed char", "unsigned char", "short int", "unsigned short int", "int", "unsigned int", "long int", "unsigned long int", "long long int", "unsigned long long int", "float", "double"};
    cout << "Size of char : " << sizeof(char) << " byte"
         << endl;

    cout << "char minimum value: " << CHAR_MIN << endl;

    cout << "char maximum value: " << CHAR_MAX << endl;

    cout << "Size of int : " << sizeof(int) << " bytes"
         << endl;

    cout << "Size of short int : " << sizeof(short int)
         << " bytes" << endl;

    cout << "Size of long int : " << sizeof(long int)
         << " bytes" << endl;

    cout << "Size of signed long int : "
         << sizeof(signed long int) << " bytes" << endl;

    cout << "Size of unsigned long int : "
         << sizeof(unsigned long int) << " bytes" << endl;

    cout << "Size of float : " << sizeof(float) << " bytes"
         << endl;

    cout << "Size of double : " << sizeof(double)
         << " bytes" << endl;

    cout << "Size of wchar_t : " << sizeof(wchar_t)
         << " bytes" << endl;

    const int aa = 1222;
    cout <<increase(aa) << endl;


    // auto

    int studentID = 122311;
    auto &ref = studentID; // it is the reference to the variable:means it points to the value stored in memory block
    ref = 3342;
    int store = studentID; // it creates the new variable that points to the copy of the variable
    store = 1211;
    cout << studentID << endl;

    // integer literal:dec,oct,hex,bin,L,LL,U,

    int dec = 100; //decimal
    int hex = 0x34A; //hexadecimal
    cout << hex << " And size of type = " << sizeof(hex) << endl;
    int oct = 034; //octal
    cout << oct << " And size of type = "<< sizeof(oct) << endl;
    int bin = 0b1010; //binary
    cout << bin << " And size of type = " << sizeof(bin) << endl;

    // type storage modifiers
    long int longInt = 1000L; //long
    cout << longInt << " And size of type = " << sizeof(longInt) << endl;
    long long int longLongInt = 1000LL; //long long
    cout << longLongInt << " And size of type = " << sizeof(longLongInt) << endl;
    unsigned int unsignedInt = 1000U; //unsigned
    cout << unsignedInt << " And size of type = " << sizeof(unsignedInt) << endl;
    //char literal
    char charLiteral = 'A';
    cout << charLiteral << endl;

    // string literal
    const char *str = "Hello, World!";
    cout << str[0] << endl;

    //lvalue or rvalue
    int p = 10;//'p' is lvalue
    int f = p + 20; // p+20 is rvalue

    int *ptr = &p; // &x is lvalue
    *ptr = 230;
    int *ptr2 = &f + 1;//address calculation is rvalue
    cout << *ptr << p<< endl;

    cout << ptr2 << endl;
}