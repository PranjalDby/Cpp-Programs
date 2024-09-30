#include <iostream>
#include <string.h>
#include <string.h>
#define MAX 10
using namespace std;
// class Employee
// {

// public:
//     std::string Name;
//     int attendance;
//     std::string Employee::*name = &Employee::Name;
//     int Employee::*attd = &Employee::attendance;
// };

// int main()
// {
//     int MAX_EMP = 0;
//     cin >> MAX_EMP;
//     Employee emp;
//     Employee employees[MAX_EMP];
//     //     for (int i = 0; i < MAX_EMP; ++i)
//     //     // {
//     //     //     std::cout << "Enter name and attendance status (0 for Absent, 1 for Present) for employee " << i + 1 << ": ";
//     //     //     std::cin >> employees[i].*employees[i].name >> employees[i].*employees[i].attendancePtr;
//     // }
//     for (int i = 0; i < MAX_EMP; ++i)
//     {
//         cout << "Enter name for employee " << i + 1 << ": ";
//         std::cin >> employees[i].*employees[i].name;
//     }
// }

#define MAX 10
class MatrixManipulator
{
public:
    int R = 0, C = 0; // Initialize the members inside the class
    void manipulate(int mat[][MAX], int r, int C1, int C2);
};

struct Node
{
    std::string data;
    Node *prev;
    Node *next;
};

// Function to split a doubly linked list into two halves
void splitDoublyLinkedList(Node *head, Node **firstHalf, Node **secondHalf)
{
    // Type your code here
    int count = 0;
    Node *ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    Node *t1 = head;
    *firstHalf = head;
    (*firstHalf)->prev = NULL;
    while (count != 0)
    {
        t1 = t1->next;
        count--;
    }
    *secondHalf = t1->next;
    t1->next = NULL;
    *(secondHalf)->prev = NULL;
}

// Remove these lines as non-static members cannot be defined outside the class
int main()
{
    // MatrixManipulator mat;
    // cin >> mat.R >> mat.C;
    // int matrix[mat.R][mat.C];
    // int c1, c2;
    // for (int i = 0; i < mat.R; i++)
    // {
    //     for (int j = 0; j < mat.C; j++)
    //     {
    //         cin >> matrix[i][j];
    //     }
    // }
    // for (int i = 0; i < mat.R; i++)
    // {
    //     cout << endl;
    //     for (int j = 0; j < mat.C; j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    // }

    // for (int i = 0; i < mat.R; i++)
    // {
    //     cin >> c1 >> c2;
    //     int temp = matrix[i][c1];
    //     matrix[i][c1] = matrix[i][c2];
    //     matrix[i][c2] = temp;
    // }
    string str = "Hello";
    str += " World!";
    cout << str.size();
    str.append("Pranjal");
    str.append("Pranjal");
    string strr;
    cin >> strr;
    return 0;
}