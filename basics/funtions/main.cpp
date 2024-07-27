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

    fun(10);
    fun(10.2);   
}
