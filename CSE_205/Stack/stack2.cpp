#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next = NULL;
};
Node *top = NULL;
void push(int data)
{
    if (top == NULL)
    {
        Node *newnode = new Node();
        newnode->data = data;
        top = newnode;
    }
    else
    {
        Node *newnode = new Node();
        newnode->data = data;
        newnode->next = top;
        top = newnode;
    }
}
void pop()
{
    if (top == NULL)
    {
        cout << "Underflow\n";
    }
    else
    {
        Node *ptr = top;
        top = top->next;
        delete (ptr);
    }
}

void show()
{
    if (top == NULL)
    {
        cout << "Empty.\n";
    }
    Node *ptr = top;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
}
class MyClass
{
public:
    int num;

    MyClass()
    {
        num = 10;
    }
};
class Person
{
    string name;

public:
    Person() {} // Default constructor
    Person(const string &n)
    {
        name = n;
    }
    Person(const Person &obj)
    {
        name = "Copy of " + obj.name;
    }
    string getName()
    {
        return name;
    }
};

class Test
{
private:
    int x;

public:
    Test(int i)
    {
        x = i;
        cout << "Called" << endl;
    }
    // Test &operator=(int i)
    // {
    //     return *this;
    // }
    void display()
    {
        cout << x << endl;
    }
    ~Test()
    {
        cout << "Desutur\n";
    }
};

class Car
{
public:
    string name;
    string md;
    Car(string n, string md) : name(n), md(md) {};
};
class Room
{
    int breadth, height, length;
    static int count;

public:
    Room(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }

    Room(Room &r)
    {
        breadth = r.breadth;
    }

    void updateData(int l, int b, int h)
    {
        // Type your code here
    }

    int calculateArea()
    {
        // Type your code here
    }
};
int main()
{

    // push(20);
    // push(30);
    // push(40);
    // push(50);
    // pop();
    // show();
    return 0;
}