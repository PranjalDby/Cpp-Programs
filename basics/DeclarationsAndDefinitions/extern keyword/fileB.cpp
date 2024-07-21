#include<iostream>
#include "fileA.cpp"

using namespace std;

extern int i;
int main(){
    // accessing variable declared in scope of File A
    cout << i << endl;
}