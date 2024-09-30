#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next = NULL;
};
struct node *createHeader(struct node *head)
{
    if (head == nullptr)
    {
        struct node *newnode = new node();
        newnode->data = 0;
        head = newnode;
    }
    return head;
}
struct node *insertNode(struct node *head, int data)
{
    if (head != NULL && head->data == 0)
    {
        struct node *newnode = new node();
        newnode->data = data;
        head->data += 1;
        head->next = newnode;
    }
    else if (head != nullptr && head->data != 0)
    {
        struct node *ptr = head->next;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        struct node *newnode = new node();
        newnode->data = data;
        ptr->next = newnode;
        head->data += 1;
    }
    return head;
}
struct node *deleteFromBegin(struct node *head)
{
    if (head == NULL || head->data == 0)
    {
        return head;
    }
    struct node *temp = head;
    temp = head->next;
    head->next = temp->next;
    head->data -= 1;
    free(temp); // deallocating the memory;
    return head;
}
struct node *deleteFromEnd(struct node *head)
{
    if (head == NULL || head->data == 0)
    {
        return head;
    }
    struct node *temp, *prev;
    prev = head;
    temp = head;
    temp = temp->next;
    while (temp->next != NULL)
    {
        prev = prev->next;
        temp = temp->next;
    }
    prev->next = NULL;
    head->data -= 1;
    free(temp);
    return head;
}
struct node *deleteByKey(struct node *head, int key)
{
    if (head == NULL || head->data == 0)
    {
        return head;
    }
    struct node *temp, *prev;
    temp = head;
    prev = head;
    temp = temp->next;
    while (temp->next != NULL && temp->data != key)
    {
        prev = prev->next;
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        cout << "element not found." << endl;
        return head;
    }
    cout << prev->data << endl;
    prev->next = temp->next;
    head->data -= 1;
    free(temp);
    return head;
}
void print(struct node *head)
{
    if (head == NULL || head->data == 0)
    {
        return;
    }
    struct node *ptr = head;
    cout << ptr->data << " -> ";
    ptr = ptr->next;
    while (ptr != NULL)
    {
        cout << ptr->data << " -> ";
        ptr = ptr->next;
    }
    cout << " NULL" << endl;
}
int main()
{
    struct node *head = NULL;
    head = createHeader(head);
    cout << head->data << endl;
    head = insertNode(head, 10);
    head = insertNode(head, 20);
    head = insertNode(head, 30);
    head = insertNode(head, 40);
    cout << "After Deletion " << endl;
    head = deleteByKey(head, 10);
    print(head);
    return 0;
}