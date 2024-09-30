#include <iostream>
using namespace std;

struct Node
{
    char data;
    struct Node *next = NULL;
};
void insertNode(struct Node **head, char data)
{
    struct Node *newnode = new Node();
    newnode->data = data;
    if (head == NULL || *head == NULL)
    {
        *head = newnode;
    }
    else
    {
        struct Node *ptr = *head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newnode;
        ptr = newnode;
    }
}
void reverseLL(struct Node **head)
{
    if (head == NULL || *head == NULL)
    {
        return;
    }
    struct Node *curr = *head, *prev = NULL, *next;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;
}
bool isIdentical(struct Node *head1, struct Node *head2)
{
    if (head1 == NULL || head2 == NULL)
    {
        return true;
    }
    struct Node *pt1 = head1, *pt2 = head2;
    while (pt1 && pt2)
    {
        if (pt1->data != pt2->data)
        {
            return false;
        }
        pt1 = pt1->next;
        pt2 = pt2->next;
    }
    return true;
}
bool isPalindrome(struct Node **head)
{
    if (*head == NULL || head == NULL)
    {
        return true;
    }
    // find the middle element
    Node *slow = *head, *fast = (*head)->next;
    while (fast != NULL && fast->next != NULL)
    {

        slow = slow->next;
        fast = fast->next->next;
    }
    cout << "slow pointer = " << slow->data << " and slow->next = " << slow->next->data << endl;
    Node *head2 = slow->next;
    slow->next = NULL;
    reverseLL(&head2);
    return isIdentical(*head, head2);
}
void print(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << "->" << " ";
        ptr = ptr->next;
    }
    cout << "NULL";
}
int main()
{
    Node *head = NULL;
    insertNode(&head, '1');
    insertNode(&head, '2');
    insertNode(&head, '3');
    insertNode(&head, '4');
    insertNode(&head, '5');
    insertNode(&head, '4');
    insertNode(&head, '3');
    insertNode(&head, '2');
    insertNode(&head, '1');
    print(head);
    // insertNode(&head, 't');
    cout << isPalindrome(&head);
    // reverseLL(&head);
    // print(head);
    return 0;
}