#include<iostream>

using namespace std;

//type-conversion

class integer{
    int x;
    public:
        integer(int x_in = 0):x{x_in}{
            cout << "Constructor is called" << endl;
        }

        //user-defined conversion operator
        operator string(){
            cout << "Conversion Operator is Called." << endl;
            return to_string(x);
        }
};

// Dynamic - casting

//Base-class
class Animal{
    public:
    //virtual is used to make method overriding possible
        virtual void speak() const{
            cout << "Animal speaks." << endl;
        }
};

// Derived Class
class Dog : public Animal {
public:
    void speak() const override
    {
        cout << "Dog barks." << endl;
    }
};

// Derived Class
class Cat : public Animal {
public:
    void speak() const override
    {
        cout << "Cat meows." << endl;
    }
};
int main(){

    //implicit type conversion

    int a = 10; // Integer
    char b = 'a'; // char

    a = a + b; //b is implicitly converted into int. b = 'a' get converted into 97

    float c = a * 10.0;
    cout << c <<endl;

    // explicit type casting

    // 1.forceful type-casting

    double d = 32.2;
    int e = (int)d * 101; //explicitly converted double to int
    // explicitly converting int to double
    cout << e << endl;
    d = (float)e + 0.0;   
    cout << d << endl;

    //2.Using cast operator
    
    int f = 1000;
    char g = 'G';
    cout << (static_cast<int>(g) + 1000);

    // different Scenarios of static_cast

    // 1.converting a ptr of one type to other

    // int *h = static_cast<int*>(&g);

    // 2.Converting an Object using a User-defined Conversion Operator :: we have to create a clas

    integer obj(30);
    string str = obj; // it doesn't throw error because we create a conversion operator
    cout << "Implicitily type casted. " << str << endl;

    //using static_cast<dest_type>
    string str2 = static_cast<string>(obj);
    obj = static_cast<integer>(30);
    cout << str2 << endl;

    int i = 10;
    void *v = static_cast<void*>(&i);
    int* r = static_cast<int*>(v); 
    cout << *r<< endl;

    // -------------------------------------------------------- Dynamic casting ------------------------------------------------------------------
    // base class pointer to derived class object
    Animal* animalPtr = new Dog();

    //downCasting

    Dog *ptr = dynamic_cast<Dog*>(animalPtr);

    // checking if the type-casting is successfull

    if(ptr){
        ptr->speak();
    }
     else {
        cout << "Failed to cast to Dog." << endl;
    }
    
    // typecasting to other dervied class
    Cat* catPtr = dynamic_cast<Cat*>(animalPtr);
    if (catPtr) {
        catPtr->speak();
    }
    else {
        cout << "Failed to cast to Cat. cus animalptr point to Dog class." << endl;
    }


    // ------------------------------------------------- const_cast<type>() --------------------------------------------------------------------

    int number = 1000;
    const int *numberPt = &number;
    int* nonConstPtr = const_cast<int *>(numberPt);
    *nonConstPtr = 97;
    cout << number << endl;

    //----------------------------------------------- reinterpret_cast -------------------------------------------------------------------------


    char *pt = reinterpret_cast<char *>(nonConstPtr);
    
    cout << pt << endl;
    cout << &nonConstPtr << endl;
}