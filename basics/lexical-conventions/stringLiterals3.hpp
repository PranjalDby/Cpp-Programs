#pragma once
#ifndef complex
    #include <complex>
    #define FLAG "PRANJAL"
#endif
#include <string.h>
// User-Defined literal operator signatures
// We implement a user-defined literal by defining an operator"" at namespace scope with one of the following forms

long long int operator "" _a(unsigned long long int x){
    return x;
};
long double operator "" _b(long double num){
    return num * 0.12;
};
// template <char...> ReturnType  operator "" _t();

// Examples following from geeks-for-geeks


// UDL for converting value to kg
long double operator "" _kg (long double x){
    return x * 1000;
}

// UDL for returning value of grams
long double operator "" _g(long double gr){
    return gr;
}


void operator ""_dump(unsigned long long int lit)
{
    printf("operator \"\" _dump(unsigned long long int) : ===>%llu<===\n", lit);
};

// Literal operator for user-defined FLOATING literal
void operator "" _dump(long double lit)
{
    printf("operator \"\" _dump(long double)            : ===>%Lf<===\n",  lit);
};

// Literal operator for user-defined CHARACTER literal
void operator "" _dump(char lit)
{
    printf("operator \"\" _dump(char)                   : ===>%c<===\n",   lit);
};

void operator "" _dump(wchar_t lit)
{
    printf("operator \"\" _dump(wchar_t)                : ===>%d<===\n",   lit);
};

void operator "" _dump(char16_t lit)
{
    printf("operator \"\" _dump(char16_t)               : ===>%d<===\n",   lit);
};

void operator "" _dump(char32_t lit)
{
    printf("operator \"\" _dump(char32_t)               : ===>%d<===\n",   lit);
};

const char* oop = "_dd";
// Literal operator for user-defined STRING literal
void operator "" _dump(const     char* lit, size_t)
{
    printf("operator \"\" _dump(const     char*, size_t): ===>%s<===\n",   lit);
};

void operator ""_dump(const  wchar_t* lit, size_t)
{
    printf("operator \"\" _dump(const  wchar_t*, size_t): ===>%ls<===\n",  lit);
};

void operator ""_dump(const char16_t* lit, size_t)
{
    printf("operator \"\" _dump(const char16_t*, size_t):\n"                  );
};

void operator ""_dump(const char32_t* lit, size_t)
{
    printf("operator \"\" _dump(const char32_t*, size_t):\n"                  );
};

// Raw literal operator
struct A {
    constexpr A(const char*) {}
};
template<A a>
A operator ""_a();