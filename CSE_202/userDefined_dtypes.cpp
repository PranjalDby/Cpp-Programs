#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

// structures
struct employee
{
    int id = 0; // we can initialize the structure data members in c++ 11 and above
    char name[50];
    double salary;
};
class year
{
public:
    int currentMonth;
    enum Month
    {
        January,
        February,
        March,
        April,
        May,
        June,
        July,
        August,
        September,
        October,
        November,
        December
    };
    void setMonth(int number)
    {
        switch (number)
        {
        case 1:
            currentMonth = January;
            break;
        case 2:
            currentMonth = February;
            break;
        case 3:
            currentMonth = March;
            break;
        case 4:
            currentMonth = April;
            break;
        case 5:
            currentMonth = May;
            break;
        case 6:
            currentMonth = June;
            break;
        case 7:
            currentMonth = July;
            break;
        case 8:
            currentMonth = August;
            break;
        case 9:
            currentMonth = September;
            break;
        case 10:
            currentMonth = October;
            break;
        case 11:
            currentMonth = November;
            break;
        case 12:
            currentMonth = December;
            break;
        default:
            cout << "Invalid month number" << endl;
            break;
        }
    }

    void getMonth(int number)
    {
        switch (number)
        {
        case 1:
            cout << "Month: " << January << endl;
            break;
        case 2:
            cout << "Month: " << February << endl;
            break;
        case 3:
            cout << "Month: " << March << endl;
            break;
        case 4:
            cout << "Month: " << April << endl;
            break;
        case 5:
            cout << "Month: " << May << endl;
            break;
        case 6:
            cout << "Month: " << June << endl;
            break;
        case 7:
            cout << "Month: " << July << endl;
            break;
        case 8:
            cout << "Month: " << August << endl;
            break;
        case 9:
            cout << "Month: " << September << endl;
            break;
        case 10:
            currentMonth = October;
            break;
        case 11:
            currentMonth = November;
            break;
        case 12:
            currentMonth = December;
            break;
        default:
            cout << "Invalid month number" << endl;
            break;
        }
    }
};

// nested-structures: structure inside the other structure
struct dimensions
{
    int x, y;
};
struct square
{
    dimensions left;
    dimensions right;
};

int gcd(int x, int y)
{

    int maxi = max(x, y);
    int mini = min(x, y);
    while (maxi > 0)
    {
        int Q = maxi / mini;
        int r = maxi % mini;
        if (r == 0)
        {
            return mini;
        }
        maxi = mini;
        mini = r;
    }
    return -1;
}
struct node
{
    int data1;
    int data2;
    struct node *link;
};

// self-referential structures with multiple links.
struct doublyLL
{
    int data;
    struct doublyLL *next;
    struct doublyLL *prev;
    doublyLL(int d)
    {
        data = d;
        prev = next = nullptr;
    }
};

doublyLL *createLink(struct doublyLL *head, int data)
{
    doublyLL *node = new doublyLL(data);
    if (head == nullptr)
    {
        node->next = head;
        head = node;
        return head;
    }
    doublyLL *pt = head;
    while (pt->next != nullptr)
    {
        pt = pt->next;
    }
    node->prev = pt;
    pt->next = node;
    return head;
}
void print(struct doublyLL *head)
{
    doublyLL *ptr = head;
    while (ptr != NULL)
    {
        std::cout << ptr->data << " ";
        ptr = ptr->next;
    }
    std::cout << std::endl; // Add a new line after printing all the data
}
inline int sqaure(int x)
{
    return x * x;
}
int calcPower(int base, int exponent = 2)
{
    int res = 1;
    for (int i = 0; i < exponent; i++)
    {
        res *= base;
    }
    return res;
}

union geek
{
    // defining data members
    int age;
    char grade;
    float gpa;
};
void performcal(int x);
class A;
class A
{
    friend void performcal(int x);
};
void performcal(int x)
{
    cout << x;
}
int main()
{

    // Unions:User-defined data types in which each elements have access to single memory.in which we can only assign the value to one data members.
    geek g1;
    // g1.age = 25;
    // g1.gpa = 10.0;
    // g1.grade = 'o';
    // cout << "GPA = " << static_cast<char>(g1.gpa) << setw(4);

    cout << "Memory Allocation Schema." << endl;
    cout << "Memory address of age: " << &g1.age << endl;
    cout << "Memory address of GPA: " << &g1.gpa << endl;
    cout << "Memory address of marks: " << &(g1.grade) << endl;
    cout << "Size of union = " << sizeof(g1) << endl;

    // Anonymous Unions
    union
    {
        int length;
        int breadth;
    };
    length = 20;
    cout << "The length would be = " << length << endl;
}