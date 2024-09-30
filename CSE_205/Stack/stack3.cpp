#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
struct Node *top = NULL;

void push(int dta)
{
    Node *newnode = new Node();
    newnode->data = dta;
    newnode->next = top;
    top = newnode;
}
void pop()
{
    if (top == NULL)
    {
        cout << "Already Empty.\n";
    }
    else
    {
        Node *temp = top;
        top = top->next;
        temp->next = NULL;
        delete (temp);
    }
}
void display()
{
    if (top == nullptr)
    {
        cout << "????????????????????????\n";
    }
    else
    {
        Node *p = top;
        while (p != nullptr)
        {
            cout << p->data << "->";
            p = p->next;
        }
        cout << "X";
        cout << '\n';
    }
}
void peek()
{
    if (top == nullptr)
    {
        cout << "????????????????????????\n";
    }
    else
    {
        cout << "Top data = " << top->data << "\n";
    }
}
int main()
{
    push(10);
    push(20);
    push(40);
    push(50);
    push(60);
    peek();
    display();
    pop();
    peek();
    pop();
    display();
    return 0;
}