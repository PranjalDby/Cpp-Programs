#include <iostream>
#include <iomanip>
#include <complex.h>
using namespace std;

class Rectangle
{
public:
    int l;
    int b;
};

string SPECS = "RYZEN 7 4800H GEN 2";

void bubbleSort(int arr[], int n)
{
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         // compairing the adjacent element
    //         if (arr[j] > arr[j + 1])
    //         {
    //             swap(arr[j], arr[j + 1]);
    //         }
    //     }
    // }

    int i = 0;
    while (i < n - 1)
    {
        int j = 0;
        int flag = 0;
        while (j < n - i - 1)
        {
            // compairing the adjacent element
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = 1;
            }
            j++;
        }
        if (flag == 0)
        {
            // elements are already sorted
            break;
        }
        i++;
    }
}

void insertionSort(int arr[], int n)
{
    int temp;
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        temp = arr[i];
        while (j >= 0 && arr[j] >= temp)
        {
            // right-shift the elements
            arr[j + 1] = arr[j];
            j--;
        }
        // putting the element at correct position
        arr[j + 1] = temp;
    }
}
void selectionSort(int arr[], int n)
{
    int temp;
    flush(cout);
    for (int i = 0; i < n - 1; i++)
    {
        int index = (n - i) - 1;
        int max = INT_MIN;
        int max_Index = 0;
        for (int j = 0; j <= index; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
                max_Index = j;
            }
        }
        temp = arr[index];
        arr[index] = max;
        arr[max_Index] = temp;
    }
}
bool binarySearch(int arr[], int n, int ele)
{
    int s = 0;
    int end = n - 1;
    int mid = s + (end - s) / 2;
    while (s <= end)
    {
        // if we found the element
        if (arr[mid] == ele)
        {
            return true;
        }
        else if (arr[mid] > ele)
        {
            end = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (end - s) / 2;
    }
    return false;
}
double calculateTotalPrice(double price, int quantity, double discountPercentage)
{
    return price * (1.00 - (discountPercentage / 100.00));
}

double operator"" _i(long double i)
{
    return -1 * i;
}
int fibonnaci(int num)
{
    if (num <= 1)
    {
        return num;
    }
    return fibonnaci(num - 1) + fibonnaci(num - 2);
}

// implementing the linked list

struct node
{
    int data;
    struct node *next = NULL;
};
struct node *createNode(struct node *head, int data)
{
    struct node *newnode = new node();
    newnode->data = data;
    if (head == NULL)
    {
        head = newnode;
        return head;
    }
    else
    {
        struct node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newnode;
    }
    return head;
}
struct node *insertAtBegin(struct node *head, int data)
{
    if (head == nullptr)
    {
        head = createNode(head, data);
        return head;
    }
    struct node *newnode = new node();
    newnode->data = data;
    newnode->next = head;
    head = newnode;
    return head;
}
struct node *insertat(struct node *head, int data, int pos)
{
    if (head == nullptr)
    {
        head = createNode(head, data);
        return head;
    }
    else
    {
        struct node *newnode = new node();
        newnode->data = data;

        int count = 0;
        struct node *ptr = head;
        while (ptr != nullptr)
        {
            count++;
            ptr = ptr->next;
        }
        int i = 1;
        if (pos > count)
        {
            cout << "Invalid Pos.";
            return head;
        }
        ptr = head;
        while (i <= pos - 1)
        {
            ptr = ptr->next;
            i++;
        }
        newnode->next = ptr->next;
        ptr->next = newnode;

        return head;
    }
}
struct node *deleteBegin(struct node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    else if (head->next == NULL)
    {
        delete (head);
        return NULL;
    }
    struct node *ptr = head;
    head = head->next;
    delete (ptr);
    return head;
}
struct node *deleteLast(struct node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    else if (head->next == NULL)
    {
        delete (head);
        return NULL;
    }
    struct node *ptr = head;
    struct node *p = ptr;
    while (ptr->next != NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = NULL;
    delete (ptr);
    return head;
}
struct node *deleteFromPos(struct node *head, int pos)
{
    if (head == NULL)
    {
        return head;
    }
    int count = 0;
    struct node *ptr = head;
    while (ptr != nullptr)
    {
        count++;
        ptr = ptr->next;
    }
    if (pos > count)
    {
        cout << "Position must be less than no of nodes." << "\n";
        return head;
    }
    int i = 0;
    ptr = head;
    while (i < pos - 1)
    {
        i++;
        ptr = ptr->next;
    }
    struct node *p = ptr;
    p->next = ptr->next;
    ptr->next = NULL;
    delete (ptr);
    return head;
}
void printData(struct node *head)
{
    if (head == NULL)
    {
        cout << "Empty Linked List" << endl;
    }
    struct node *p = head;
    cout << "no of Nodes = " << p->data << endl;
    p = p->next;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

static int count = 0;
// Header-linkedList: Grounded header and circular header linked list
struct node *createNodeOrHeader(struct node *header, int data)
{
    if (header == NULL || count == 0)
    {
        header = new node();
        struct node *newnode = new node();
        newnode->data = data;
        count++;
        header->data = count;
        header->next = newnode;
        cout << "Created Header node Successfully." << endl;
        return header;
    }
    else
    {
        count++;
        struct node *newnode1 = new node();
        newnode1->data = data;
        struct node *tail = header->next;
        while (tail->next != nullptr)
        {
            tail = tail->next;
        }
        tail->next = newnode1;
        header->data = count;
        return header;
    }
};
int main()
{

    // struct node *head = NULL;
    // while (true)
    // {
    //     int choice;
    //     cout << "enter your Choice: 1 for true 0 for false:" << " ";
    //     cin >> choice;
    //     if (choice)
    //     {
    //         int data;
    //         cout << "Enter the data: " << " ";
    //         cin >> data;
    //         head = createNode(head, data);
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    // // head = insertat(head, 101, 2);
    // // cout << "\n";
    // cout << "delete at Last" << endl;
    // int pos;
    // cout << "Enter the position: " << endl;
    // cin >> pos;
    // head = deleteFromPos(head, pos);
    // printData(head);
    struct node *header = NULL;
    header = createNodeOrHeader(header, 20);
    header = createNodeOrHeader(header, 50);
    header = createNodeOrHeader(header, 80);
    header = createNodeOrHeader(header, 60);
    printData(header);
}
