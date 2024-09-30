// You are using GCC
#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node *next;
};

void appendLeft(Node **head, int val)
{
    //
    cout << endl;
}

/**
 * @brief Appends a new node with the given value to the end of the linked list.
 *
 * This function creates a new node with the specified value and appends it to
 * the end of the linked list. If the list is empty, the new node becomes the head.
 *
 * @param head A double pointer to the head of the linked list.
 * @param val The value to be added to the new node.
 */
void appendRight(Node **head, int val)
{
    struct Node *newnode = new Node();
    newnode->val = val;
    if (*head == NULL)
    {
        *head = newnode;
        newnode->next = NULL;
        return;
    }
    struct Node *ptr = *head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    newnode->next = NULL;
    ptr->next = newnode;
}

void print(Node **head)
{
    // Type your code here
    if (head == NULL)
    {
        return;
    }
    struct Node *pt = *head;
    cout << "Linked List: ";
    while (pt != NULL)
    {
        cout << pt->val << " ";
        pt = pt->next;
    }
}

int main()
{
    Node *myList = nullptr;
    int choice;
    int val;

    do
    {
        cin >> choice;

        switch (choice)
        {
        case 1:
            cin >> val;
            appendLeft(&myList, val);
            break;
        case 2:
            cin >> val;
            appendRight(&myList, val);
            break;
        case 3:
            cout << "Linked List: ";
            print(&myList);
            break;
        case 4:
            break;
        default:
            cout << "Invalid choice";
        }

    } while (choice != 4);

    return 0;
}