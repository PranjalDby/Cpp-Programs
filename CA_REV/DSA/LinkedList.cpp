#include <iostream>
using namespace std;

struct Node
{
    int data = -1;
    Node *next = NULL;
};
struct Node *head = NULL, *ptr = NULL;
void createNode(Node **head, int data)
{
    Node *newnode = new Node;
    newnode->data = data;
    if (head == NULL || *head == NULL)
    {
        *head = newnode;
        ptr = *head;
        return;
    }
    if (ptr->next == NULL)
    {
        ptr->next = newnode;
        ptr = newnode;
    }
}

void reverseLL(Node **head)
{
    if (head == NULL)
    {
        return;
    }
    Node *curr = *head, *prev = NULL, *next;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;
}
void helper(Node **newnode, Node **curr)
{
    if (*newnode == NULL || (*curr)->data >= (*newnode)->data)
    {
        (*curr)->next = *newnode;
        *newnode = *curr;
        return;
    }
    Node *ptr = (*curr)->next;
    while (ptr->next != NULL)
    {
        if (ptr->data)
            ptr = ptr->next;
    }
    cout << newnode << endl;
    if (*newnode != NULL)
    {
        (*newnode)->next = ptr->next;
    }
    // (*curr)->next = *newnode;
}
void sortingLL(Node **head)
{
    if (head == NULL || *head == NULL)
    {
        return;
    }
    Node *curr = *head, *next = NULL;
    Node *newnode = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        helper(&newnode, &curr);
        cout << "Newnode Data = " << newnode->data << endl;
        curr = next;
    }
}
void display(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
int main()
{
    createNode(&head, 10);
    createNode(&head, 2);
    createNode(&head, 30);
    createNode(&head, 4);
    createNode(&head, 9);
    // reverseLL(&head);
    sortingLL(&head);
    display(head);
    return 0;
}