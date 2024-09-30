#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next = NULL;
};

struct Node *createHeader(struct Node *head)
{
    if (head == NULL)
    {
        struct Node *newnode = new Node();
        newnode->data = 0;
        head = newnode;
        newnode->next = head;
        return head;
    }
    return head;
}
void createNodes(Node **head, int data)
{

    struct Node *ptr = (*head)->next;
    struct Node *newnode = new Node();
    newnode->data = data;
    while (ptr->next != *head)
    {
        ptr = ptr->next;
    }
    ptr->next = newnode;
    ptr = newnode;
    newnode->next = *head;
    (*head)->data += 1;
    // cout << ((*head)->next->data) << endl;
}
void insertAtBegin(struct Node **head,int data){
    if(head != NULL ||*head != NULL){
        Node *newnode = new Node();
        newnode->data = data;
        newnode->next = (*head)->next;
        
    }
}
void print(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *temp = head->next;
    while (temp != head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;
    head = createHeader(head);
    createNodes(&head, 20);
    createNodes(&head, 30);
    createNodes(&head, 40);
    createNodes(&head, 50);
    print(head);
    return 0;
}