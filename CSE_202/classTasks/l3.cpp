#include <iostream>
using namespace std;

struct employee
{
    // struture elements
    int age = 0;
    float salary = 0.0;
    char name[50];
};
void getdata(employee e)
{
    cout << "Enter your Name: " << endl;
    cin.get(e.name, 50);
    cout << "Enter your age and salary: " << endl;
    cin >> e.age >> e.salary;

    cout << "Entere'd data is " << "Name: " << e.name << "Age: " << e.age
         << "And Salary " << e.salary << endl;

    return;
}
union empl
{
    int age;
    float salary;
    char name[50];
};
union test
{
    struct t1
    {
        string name;
        float salary;
    };
};
enum student
{
    NAME,
    CLASS,
    SECTION,
    ROLLNO = 52,
    OOPS = 202,
    DSA = 205,
    OS,
    PEL,
    COMPUTER_ORG,
    OS_LAB
};
struct book
{
    string name;
    float price;
    string author;
    int noPages;
    string yop;
};
void printIt(book b1)
{
    printf("Name = %s\n Author = %s\n Price = %f\n Pages = %d\n YOP = %s\n", (string)b1.name, b1.author, b1.price, b1.noPages, b1.yop);
}
int main()
{
    employee e1;
    // getdata(e1);

    //     // creating an array of struct employee
    //     employee e2[100];
    //     for (int i = 0; i < 3; i++)
    //     {
    //         cout << "Hello";
    //     }
    // }

    /*
    write a program to create enum named as 'student' it must have ten string constants out of which three string constants should be initialized by you, and then display there values.
    */
    /*
    write a program to create a structure named as 'books' having five elemets name,price,author,year_of_publication,n_pages and then store the record of 5 books using 5 different structure variable or array of structure variable
    */
    empl e;
    e.age = 20;
    cout << e.age << endl;
    e.salary = 40000;
    cout << e.salary << endl;
    test::t1 test1;
    test1.name = "Pranjal";
    cout << test1.name << endl;
    student st;
    st = OOPS;
    cout << "OOPS subject code = " << st << endl;
    st = OS_LAB;
    cout << "OS_LAB subject code = " << st << endl;
    st = NAME;
    cout << st << endl;

    // structure book

    book b1, b2, b3, b4, b5;
    b1.name = "Concept of C++ programming";
    b1.author = "Bjarne Stroustrop";
    b1.noPages = 980;
    b1.yop = "2013";
    b1.price = 1500.0;
    printIt(b1);
}