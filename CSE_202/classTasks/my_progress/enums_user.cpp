#include <iostream>
#include <typeinfo>
using namespace std;

// 1.Two Enumerators can have a same value;
enum state
{
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};
enum A
{
    PRANJAL = 10,
};

class BaseClass
{
public:
    virtual void print()
    {
        cout << "Base CLasss..." << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    void print()
    {
        cout << "Derived class" << endl;
        ;
    }
};
int main()
{
    cout << Monday << " ";
    cout << Tuesday << " ";
    cout << Thursday << " ";
    // Scope local to the main
    {
        // scope local to this block only
        enum insideMain
        {
            A = 10,
            B,
            D = 30,
            C,
            E = 101
        };
    };

    //...................cast-operators.....................

    // 1.static_cast<T>()

    // converting from char to int
    // char a;
    // cin >> a;
    // cout << "ASCII = " << static_cast<int>(a) << "And type is = " << typeid(a).name();

    // 2.Dynamic_cast<>()
    // a)UpCasting
    DerivedClass d1;
    BaseClass *bb = dynamic_cast<BaseClass *>(&d1);
    bb->print();
    // DownCasting
    DerivedClass *dp2 = dynamic_cast<DerivedClass *>(bb);

    if (dp2 != nullptr)
    {
        cout << "casting successfull" << endl;
        dp2->print();
    }
    else
    {
        cout << "Unsuccessfull" << endl;
    }
}