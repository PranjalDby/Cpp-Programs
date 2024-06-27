`#include<iostream>
#include<limits>
using namespace std; // Add this line to explicitly specify the namespace for "cout"

int greaterTh(int a,int b){
    return 1 ? a > b : 0;
}

void checkPtrReaction(int *p){
    bool b = p; //! narrows to true or false
    bool b2{p != nullptr}; //! explicit test against nullptr
    if(p)
    std::cout << "p is not null" << std::endl; // Specify the namespace for "cout"

}
void mixingPointersDifferentTypes(char c,unsigned char uc, signed char sc){

    cout << "Warning !! 💀💀💀 do not Enter" << endl;
    // char *p = &uc; // error : no pointer conversion
    // signed char *psc = p; // error : no pointer conversion
    // unsigned char *puc = p; // error : no pointer conversion

}

void checkAssigningTwoLargeValues(char c,signed char sc,unsigned char uc){
    c = 255; //implemntation-defined if plain chars are signed and have 8 bits
    c = uc; // okkay if plain chars are signed and have 8 bits
    cout << "c = "<< c << endl;
    sc = uc; // implementation-defined if uc's value is too large
    uc = sc; // ok:: conversion to unsigned char
    cout << "uc = " << uc << endl;
    sc = c; // implementation-defined if plain chars are unsigned and c's value is too large
    uc = c; // ok:: conversion to unsigned char
}
int main()
{
    // cout << "Hello World" << std::endl;
    // bool res = bool(greaterTh(100, 3));
    // bool r{1};
    // cout << r << endl;
    // //! boolean implementation on arithmetic and logical operations
    // bool a = true;
    // bool b = true;
    // bool x = a + b;
    // bool y = a || b; //! or operation
    // bool z = a - b;

    // cout << "a + b = " << a + b << "\n"
    //      << "x = " << x
    //      << "y = " << y
    //      << "z = " << z <<"\n";
    // //! boolean with pointers
    // int number = 1000;
    // checkPtrReaction(NULL);

    //! --------------------------------------------------------------------------------------

    //! char types:===

    //! each character has an integer values associated with it in charset

    // cout << "Integer value of character " << " a = " << int{'a'} << endl;
    // for(char c; cin>>c;){
    //     cout << "Integer value of character " << c << int{c} << endl;
    // }

    // note that character types are integeral types. so that arithmetic operations can be performed on them

    for(int i = 0;i != 10;++i){
        cout << char('0' + i);
    }

    // signed and unsigned char types
    cout << "-----------------------------------" << endl;
    char c = 255; // maximum value of char
    int i = c;
    cout << "i = " << (i == ' ') << endl;

    // affect of the mixing pointer to different char types
    char normal = 'a';
    unsigned char uch = 'b';
    signed char sch = 120;
    unsigned char ucc = sch;
    cout << "ucc = " << ucc << endl; ;
    // mixingPointersDifferentTypes(normal, uch, sch);
    // for(int i = -127;i != 128;++i){
    //     cout << "i = "<< i << " "<< static_cast<signed char>(i) <<endl; // Cast the integer value to a signed char
    // }
    
    // checkAssigningTwoLargeValues(normal, sch, uch);

    #include <typeinfo> // Include the <typeinfo> header file

    char count[256];
    // for(int i = 0 ; i < 256; ++i){
    //     cout << count[i] << endl;
    // }
    ++count[ucc];
    cout << "bdcbsvuhk"<< count[ucc] << endl;

    //! character literals--------------------------------------------------------------------------------

    char v1 = 'a'; // character literal

    char v2[] = "a\xah\129"; // 6 chars: 'a' '\xa' 'h' '\12' '9' '\0'
    cout << typeid(v2).name() << endl; // Use typeid instead of type_info

    //! -----------------------------------------x Integer literals x------------------------------------------------------------------

    cout << 0xF0UL << ' ' << 0LU << '\n';
    cout << 015 <<endl;

    //! -----------------------------------------x Floating-point literals x------------------------------------------------------------------

    cout << "floating point literal " << 3.14 << ' ' << " floating point literal of type float "<< 3.14f << ' ' << "Long Double " << 3.14L << '\n';

    cout << "floating point literal " << 3.14e-2 << ' ' << " floating point literal of type float "<< 3.14e-2f << ' ' << "Long Double " << 3.14e-2L << '\n';
    long long int x = 5ull;
    cout << sizeof(x) << endl;

    //! ------------------------------------------- void type ------------------------------------------------------------
    // void v; //error: there are no void types
    void *pv; // ok: pointer to void
    void f(); // ok: function returning void

    // ----------- Sizes ------------------------------------------------------------------------------------------------
    cout << "Size of char " << sizeof(char) << endl;
    cout << "size of char < short < int < long < long long = " <<
    static_cast<long long>(sizeof(char)) << ' ' <<
    static_cast<long long>(sizeof(short)) << ' ' <<
    static_cast<long long>(sizeof(int)) << ' ' <<
    static_cast<long long>(sizeof(long)) << ' ' <<
    static_cast<long long>(sizeof(long long)) << '\n';

    // ---------------------------------------- Some implementation-defined aspects of fundamental types -----------------

    cout << "Size of long" << sizeof(1L) << "\n";
    cout << "Size of long long " << sizeof(1LL) << "\n";

    cout << "largest float == " <<numeric_limits<float>::max()<< '\n';
    cout << "char is signed == " <<numeric_limits<char>::is_signed<< '\n';


    return 0; // Removed the unnecessary argument
}