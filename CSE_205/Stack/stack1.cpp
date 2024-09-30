#include <iostream>
using namespace std;

#define MAX 10
int top = -1;
int stack[MAX];
void push()
{
    if (top >= MAX - 1)
    {
        cout << "Overflow.\n";
    }
    else
    {
        cout << "Enter the element: " << endl;
        int e;
        cin >> e;
        top = top + 1;
        stack[top] = e;
    }
}
void pop()
{
    if (top < 0)
    {
        cout << "Underflow.\n";
    }
    else
    {
        stack[top] = -1;
        top = top - 1;
    }
}
int peek1()
{
    if (top < 0)
    {
        cout << "Underflow.\n";
        return -1;
    }
    return stack[top];
}
void show()
{
    if (top == -1)
    {
        cout << "Emptu.\n";
    }
    else
    {
        int i = top;
        while (i >= 0)
        {
            cout << stack[i] << " ";
            i--;
        }
        cout << endl;
    }
}
int main()
{
    int flag = 1;
    while (flag)
    {
        cout << "1:push 2:pop 3:show 4:peek -1:exit: \n";
        int opt = -1;
        cin >> opt;
        switch (opt)
        {
        case 1:
            cout << "Pushing.\n";
            push();
            break;
        case 2:
            cout << "Poping\n";
            pop();
            break;
        case 3:
            cout << "Displaying.\n";
            show();
            break;
        case 4:
            cout << "Peeking the first element\n";
            cout << peek1() << endl;
            ;
            break;

        default:
            flag = 0;
            break;
        }
    }
    return 0;
}