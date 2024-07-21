#include <iostream>
#include <math.h>
#include <random>
/**
 * @details
 * Derived Datatypes are datatypes that are derived by using primitive data types.
 * Types of derived data types
 * Functions
 * Arrays
 * Pointers
 * references
 */

using namespace std;

int returnCube(int n)
{
    return pow(n, 3);
}

// User-defined Data Types

class RandomArray
{
private:
    int MAX_SEED = time(0);
    int size = 0;

public:
    /**
     * @details
     * this member functions takes low,high,size as parameters;
     * @note
     * srand() and rand() deprecated
     * @deprecated
     * srand() and rand()
     * @link
     * @param{createRandomArray}
     */
    vector<int> createRandomArray(int low, int high, int size)
    {
        vector<int> arr(size);
        std::random_device rand_device;
        std::mt19937_64 generator(rand_device());
        std::uniform_int_distribution<int> distr(low, high);
        // srand(MAX_SEED); // here seed is our starting point @deprecated
        for (int i = 0; i < size; i++)
        {
            int res = distr(generator);
            arr[i] = res;
        }
        return arr;
    }
    int getArrSize()
    {
        return size;
    }
};

struct StudentId{
    int rollNo;
    string name;
    char grades[];
    void printExternal(){
        cout << "Printing the external marks of student"<< endl;
    }
};

union test{
    int x,y;
};
//or
union {
    int radi;
    double diameter;
}radi;

//enum

enum WEEK{
    Mon,Tue,Wed,Thur,Fri,Sat,Sun
};

int main()
{
    cout << "Function" << endl;
    cout << returnCube(30) << endl;

    int arr[] = {10, 30, 50};
    cout << "Array" << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << endl;
    }
    cout << "Pointers" << endl;
    int pt = 340;
    int *ptr = &pt;
    *ptr = 499;
    cout << *ptr << " And " << pt << endl;

    cout << "--------------------------------------------- Classes ----------------------------------------------------" << endl;

    RandomArray randArr;
    vector<int>array = randArr.createRandomArray(0,10,5);
    // cout << randArr.createRandomArray(0,5,10) << endl;
    int size = randArr.getArrSize();
    cout << "Printing Arr" << endl;
    for(auto &i:array){
        cout << i << endl;
    }
    cout << "--------------------------------------------- Structure ----------------------------------------------------" << endl;
    StudentId pranjal;
    pranjal.name = "Pranjal"s;
    pranjal.rollNo = 12400237;
    pranjal.grades[0] = 'A';
    cout << "Student Info: \n" << "Name: " <<pranjal.name << "\n" << "rollNo: " << pranjal.rollNo << "\n" << "Grade:" << pranjal.grades[0]<< endl; 
    pranjal.printExternal();
    cout << "--------------------------------------------- Union ----------------------------------------------------" << endl;
    union test t;
    t.x = 30;// it will also update the value of t.y
    cout << "value of t.x = " << t.x << " and value of t.y = " <<t.y << endl;

    radi.diameter = 30.22;
    radi.radi = radi.diameter / 2;
    cout << "Circle has diameter = " << radi.diameter << " And radii = " << radi.radi << endl;
    cout << "--------------------------------------------- Enumeration ----------------------------------------------------" << endl;
    enum WEEK days;
    for(int i = 0;i<6;i++){
        cout << (days = Wed)<< endl;
    }

    // typedef
    cout << "---------------------------------------------- typedef --------------------------------------------------------" << endl;

    typedef char16_t char16;
    typedef wchar_t widechar_t;
    const char16_t *name = u"\U0001F603";
    const char *emoji = "\U0001F603";
    wcout << name <<"And Emoji"  << endl;
    cout << name << endl;

    cout << "Size of Unsigned Long Long " << sizeof(unsigned long ) << " Size of int " << sizeof(int) << 
    " Size of float = " << sizeof(float)<< endl;

}
