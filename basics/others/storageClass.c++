// Storage Classes in Cpp:Cpp offers six types of storage classes
// 1.auto
// 2.register
// 3.extern
// 4.mutable
// thread_local

#include <iostream>
using namespace std;
#include "somefile.h"

void autoStrgClass(){
	cout << "demostrating auto\n";
	int a = 32;
	float b = 2.3;
	string c = "pranjal Dubey";
	// auto storage class is default storage class for all local variables
	// Earlier in C, auto was used to declare local variables but now it is default storage class for local variables and we couldnt use it explicitly
	cout << a <<endl;
	cout << b << endl;
	cout << c << endl;
}

int x = 32; // global variable,it can also be initialized
extern int TICKED_ID; // extern storage class is used to declare a global variable that is visible to all the program files
void extrnStrgClass(){
	cout << "demostrating extern\n";
	//telling the compiler that x is declared somewhere else
	extern int x;
	cout << x << endl;
	//updating the value of x
	x = 56;
	TICKED_ID = 322901;
	cout <<"after changing value of x"<< TICKED_ID << endl;

}
int main(){
	std::cout << "Storage Classes" << std::endl;
	//! ----- Example of auto storage class -------------------------
	autoStrgClass();
	//! ----- Example of extern storage class ------------------------
	extrnStrgClass();
	
}

