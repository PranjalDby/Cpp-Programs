#include <iomanip>
#include<math.h>
#include<version>
#include<iostream>
using namespace std;
// function that returns the ASCII Code for a character
int returnAscii(char x){
    int c = static_cast<int>(x);
    return c;
}

// ------------------------------------ functions with parameters ----------------------------------------------------------------------------------------

// there are two ways to pass a parameter: 1.pass by value 2.pass by reference

//1.pass by value:copy of variable

void multiply10(int x){
    cout << "Parameter received = " << x << endl;
    x *= 10;
    cout << "Updated parameter = " << x << endl;
}

//2.pass by reference(use of pointers)

void divideByTen(int* x){
    cout << "Parameter received = " << *x << endl;
    *x /= 10;
    cout << "Updated parameter = " << *x << endl;
}
 
class Cal{
	
public:
	static int add(int a,int b){
		cout << "add only two numbers." << endl;
		return a + b;	
	}
		
	static int add(int a,int b,int c){
		cout << "add only three numbers." << endl;
		return a+b+c;
	}
	
	
	
};
// --------------------------------------------------------- ambiguity in overloading ----------------------------------------------------------------------
//type-conversion

void fun(int);
void fun(double);
void fun(int k){
   cout << "Value of int i = " << k << endl;
}
void fun(double i){
   cout << "Value i = " << i << endl;
}


// friend functions:--------------------- a normal function who has ability to access the private as well protected data of class without being member function of class.

/*
* --------------------------------------------- Syntax --------------------------------------------------------------
* friend keyword can only be used during declarations of functions
* friend return_type func_name(params *);
*/

class Largest{
	int a,b,c;
private:
	int const GREATERNUM = 30000;
public:
	void setData();
	//friend-functions:friend keyword can only be used at time of declarations
	friend void find_max(Largest t);
};

void Largest::setData() {
	cout << "Enter the first number: ";
	cin >> a;
	cout << "\n" ;
	cout << "Enter the Second number: ";
	cin >> b;
	cout << "\n";
}

void find_max(Largest t) {
	if(t.a > t.b) {
		cout << t.a << " is greater than " << t.b << endl;
	}
	else {
		cout << t.b << " is greater than " << t.a << endl;
	}

	cout << "Accessing private members " << endl;
	cout << t.GREATERNUM << endl;
}

// return statements in c++
//return statement return the control to the caller from the function where  it is returned.

//does we return any value force-fully from function of return type void

void func() {
	cout << "Forcefully returning the value. 🪠" << endl;
}

//function prototyping:function declared first and defined after
double squareRoot(int a); // declaration

//example of default argumented function

double returnCertainBase(double const x,double const y,int baseFactor = 10) {
	return (x * y) / baseFactor;
}

inline int sub(int x,int y) {
	return x - y;
}
// ------------------------------------ inline functions and classes --------------------------------------------------------
/*
* ------------------------------ Syntax -----------------------------------------------------------
inline return_type function_name(params*){
//body
}
*/
class operations {
	double a,b,ad,sub,mul;
	double div;
public:
	void get();
	void sum();
	void difference();
	void product();
	void division();
};
inline void operations::get() {
	cout << "Enter first value:";
	cin >> a;
	cout << "Enter second value:";
	cin >> b;
}
inline void operations::sum() {
	ad = a + b;
	cout << "addition of a + b = " << ad<<endl;
}
inline void operations::difference() {
	sub = a - b;
	cout << "addition of a + b = " << sub <<endl;
}
inline void operations::product() {
	mul = a * b;
	cout << "addition of a + b = " << mul <<endl;
}
inline void operations::division() {
	div = a / b ;
	cout << "addition of a + b = " << div <<endl;
}

int main(int argc,const char *argv[])
{
    cout << "ASCII CODE FOR A = " << returnAscii('A');

    cout << "PASS BY VALUE" << endl;

    int p = 40;
    cout << "BEFOR = " << p << endl;
    multiply10(p);

    cout << "AFTER = " <<p << endl;

    cout << "PASS BY REFERENCE" << endl;

    cout << "BEFOR = " << p << endl;
    divideByTen(&p);//sending the base address of variable p;
    cout << "AFTER = " <<p << endl;

    cout << "total argument count = " << argc << endl;
    for(int i = 0; i < argc; i++){
        const char* arg = argv[i];
        cout << arg << endl;
    }
    printf("printed using nvim..\n");

    //------------------------------------------ Function Overloading -------------------------------------------------------------------------------------
    
    //types of overloading in c++:
    //1.function overloading:within the scope of the same class
    //2.operator overloading
    

    //1.funtion overlaoding
    Cal C;
    cout << C.add(10,200) << endl;
    cout << C.add(5,4,23) << endl;
	 /*
     *Ambiguios
     **/

	// ------------------------------------------------ friend functions --------------------------------------------

	// Largest l;
	// l.setData();
	// find_max(l);

	// returning a value from function in c++
	// printf("num = %d\n",func());//error

	double ans = squareRoot(2);b
	cout <<setprecision(3)<< ans << endl;
	// ----------------------------------------------- default arguments in c++ --------------------------------------------
	// default arguments are those arguments which are passed to the function if no value is provided by the user.
	// default arguments are provided from right to left.

	cout << "after single decimal place = " << returnCertainBase(10.21,11.3,100) << endl;
	// -----------------------------------inline functions -------------------------------------------------------------
	// inline functions are those functions which are defined with inline keyword. and the function is replaced with the code of the function.
	// inline functions are used to reduce the overhead of function calling.inline int return
	int r = sub(10,20);
	cout << "r = " << r << endl;

	operations op{};
	op.get();
	op.division();
}
double squareRoot(int a) {
	static_cast<double>(a);
	return sqrt(a);
}

