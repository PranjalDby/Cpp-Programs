#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *next = NULL;
    struct Node *prev = NULL;
};
Node *head = NULL, *tail = NULL;
void createNode(struct Node *head1, int data)
{
    if (head1 == NULL)
    {
        struct Node *newnode = new Node();
        newnode->data = data;
        head1 = newnode;
        tail = head1;
        // this is mandatory
        head = head1;
    }
    else
    {
        struct Node *newnode2 = new Node();
        newnode2->data = data;
        tail->next = newnode2;
        newnode2->prev = tail;
        tail = newnode2;
    }
}
void insertAtBegin(struct Node *head1, int data)
{
    if (head1 == NULL)
    {
        struct Node *newnode = new Node();
        newnode->data = data;
        head1 = newnode;
        head = head1;
    }
    else
    {
        // 10->20->30 : 50
        struct Node *newnode = new Node();
        newnode->data = data;
        newnode->next = head1;
        head1->prev = newnode;
        head1 = newnode;
        head = head1;
    }
}
void insertAtLast(struct Node *head1, int data)
{
    if (head1 == NULL)
    {
        struct Node *newnode = new Node();
        newnode->data = data;
        head1 = newnode;
        head = head1;
    }
    else
    {
        // using tailPtr;
        struct Node *newnode = new Node();
        newnode->data = data;
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}
void insertAtPos(struct Node *head1, int data, int pos)
{
    if (head1 == NULL)
    {
        struct Node *newnode = new Node();
        newnode->data = data;
        head1 = newnode;
        head = head1;
    }
    else
    {
        int count = 0;
        struct Node *ptr = head1;
        while (ptr != NULL)
        {
            count++;
            ptr = ptr->next;
        }
        if (pos < 1 || pos > count)
        {
            cout << "Invalid.";
            return;
        }
        // using tailPtr;
        struct Node *newnode = new Node();
        newnode->data = data;
        ptr = head1;
        int i = 1;
        while (i < pos - 1)
        {
            ptr = ptr->next;
            i++;
        }
        newnode->next = ptr->next;
        ptr->next = newnode;
        newnode->prev = ptr;
        newnode->next->prev = newnode;
    }
}
// 10->20
void deleteFromFront(Node *head1)
{
    if (head1 == NULL)
    {
        return;
    }
    Node *temp = head1;
    head1 = head1->next;
    head1->prev->next = NULL;
    head1->prev = NULL;
    head = head1;
    delete (temp);
}
void deleteFromLast(Node *head1)
{
    if (head1 == NULL)
    {
        return;
    }
    Node *temp = tail;
    tail = tail->prev;
    tail->next->prev = NULL;
    tail->next = NULL;
    delete (temp);
}

void deleteFromPos(Node *head1, int pos)
{
    if (head1 == NULL)
    {
        return;
    }
    if (head1->next == NULL)
    {
        delete (head1);
        return;
    }
    int count = 0;
    auto cnt = [&count, head1]()
    {
        Node *ptr = head1;
        while (ptr->next != NULL)
        {
            count++;
            ptr = ptr->next;
        }
    };
    cnt();
    cout << "What is count = " << count << endl;
    if (pos < 1 || pos > count)
    {
        cout << "Invalid Position" << endl;
    }
    Node *ptr = head1;
    int i = 1;
    while (i < pos)
    {
        ptr = ptr->next;
        i++;
    }
    // cout << "What is ptr = " << ptr->data << "prev = " << ptr->prev->data << endl;
    if (ptr->prev != NULL)
    {
        ptr->prev->next = ptr->next;
    }
    if (ptr->next != NULL)
    {
        ptr->next->prev = ptr->prev;
        if (head1 == ptr)
        {
            head1 = ptr->next;
            head = head1;
        }
        ptr->prev = NULL;
        ptr->next = NULL;
    }
    delete (ptr);
}
void display(struct Node *head1, int opt)
{
    if (head1 == NULL)
    {
        cout << "Linked List is Empty.\n";
    }
    if (opt == 1)
    {
        struct Node *ptr = head1;
        cout << "Printing Normally" << endl;
        while (ptr != NULL)
        {

            cout << ptr->data << " -> ";
            ptr = ptr->next;
        }
    }
    if (opt == 2)
    {
        struct Node *ptr2 = tail;
        cout << "Printing from Backwards" << endl;
        while (ptr2 != NULL)
        {

            cout << ptr2->data << " -> ";
            ptr2 = ptr2->prev;
        }
    }
}
// 100->200->300->400->tail;
void reversed(Node *head1)
{
    if (head1 == NULL)
    {
        cout << "List can't be reversed" << endl;
        return;
    }
    head1 = tail;
    while (tail->prev != NULL)
    {
        Node *ptr = tail->prev;
        tail->prev = NULL;
        tail->next = ptr;
        ptr->next = ptr->prev;
        tail = ptr;
    }
    head = head1;
}
int main()
{
    createNode(head, 10);
    createNode(head, 20);
    createNode(head, 30);
    createNode(head, 40);
    createNode(head, 50);
    insertAtBegin(head, 100);
    insertAtLast(head, 200);
    // insertAtPos(head, 99, -1);
    // cout << "Delete from front." << endl;
    // deleteFromFront(head);
    // deleteFromFront(head);
    // cout << "Delete from Last." << endl;
    // deleteFromLast(head);
    deleteFromPos(head, 1);
    // reversed(head);
    display(head, 1);
    // display(head, 2);
}