#include<stdlib.h>
#include<iostream>
#include<windows.h>



using namespace std;
using namespace std::string_literals;

void printNames(){
    string universal = "\U0001F917";
    // for(int i = 0;i<10;i++){
    //     if(i == 6) 
    //     abort();
    //     std::cout << "BigMouse Before Abortion" << universal << i << std::endl;
    // }
    cout << "There is A Message That You want to see" << endl;
}
struct S
{
    int value;
};

int main()
{   
    cout << "🐭" << endl;
    std::cout<< "Program Termination" << std::endl;
    // const char8_t* pointerName = u8"hello World";
    // printNames();
    // cout << sizeof(&pointerName) << endl;
    S s{3};
    // exit(3); // or return 3
    // atexit([]{
    //     cout << "Heeen last words are = Hello Love:'\U0001F920'" << endl;
    // });

    //! ------------------------------ Destruction of thread and static objects --------------------------------------------------
    // __later on____


    // wchar_t functions
    wchar_t wide_char[]= L"Pranjal Wide Character";
    wcout << wcslen(wide_char) << endl;

    // wcstok

    wchar_t delimiterSeperated[] = L"Pranjal,is,a,geek";

    wchar_t* internalState;
    wchar_t delim[] = L",";

    wchar_t* token = wcstok(delimiterSeperated,delim);
    while (token)
    {
        wcout << token << endl;
        token = wcstok(NULL,delim);
    }

    // char8_t : used inplace of unsigned char

    // char8_t utf8[] = u8"Pranjal";
    // printf("size of char8_t type string literal = %d\n",sizeof(utf8));


    // char16_t

    SetConsoleOutputCP(CP_UTF8);
    string emoji = "\U0001F60A"s;
    
    cout<< "Emoji fi "<< emoji << endl;

    // int-data types

    // long long unsigned a = 23;
    // cout << a + 10 << endl;
    
}