#include <iostream>
#include <iomanip>
#include <ios>
#include <algorithm>
#include <limits>
using namespace std;

void createMatrix(int *mat[10], int r, int c)
{
    cout << "Enter the Elements: " << "\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << "Printing an Array: " << "\n";
    for (int i = 0; i < r; i++)
    {
        cout << "\n";
        for (int j = 0; j < c; j++)
        {
            cout << mat[i][j] << " ";
        }
    }
}
int *getPointer()
{
    int num = 10;
    return &num;
}

int main()
{
    // Iomanip:setw,setprecision,setfill()..
    // ios object=>octal,decimal,hex,fixed;
    float x = 3.218;
    long double ss = 2.21;
    long long int p = 2;
    // if your'e using setprecision without fixed stream object then it will round up in some cases.
    // cout << setw(6) << setfill('@') << setprecision(2) << fixed << x << endl;
    // int r, c = 10;
    // cout << "Enter the row  = ";
    // cin >> r;
    // cout << "Enter the col = ";
    // cin >> c;
    // int mat[r][c];
    // // fill_n(*mat, r * c, 0);
    // int *pointerArr[r];
    // for (int i = 0; i < r; i++)
    // {
    //     pointerArr[i] = new int[c];
    // }
    // for (int i = 0; i < sizeof(pointerArr) / sizeof(pointerArr[0]); i++)
    // {
    //     cout << pointerArr[i] << " ";
    // }
    // createMatrix(pointerArr, r, c);
    // ............................................................
    // cin string with spaces and without spaces
    cout << "Enter your Name: " << endl;
    string name;
    // to include spaces in your string use getline()
    // getline(cin, name);
    cout << "Name = " << name;
    cout << (name > "Dubey") << endl;
    ;

    /// cin with characters
    char employeeRole[50];
    // cin.getline(employeeRole, 50);
    cout << employeeRole << endl;
    /// cin.get()
    char city[30];
    // cin.get(city, 30);
    cout << "City = " << city << endl;
    cout << "Reading the input stream using cin.read(): " << endl;
    char emoticons[40];
    // cin.read(emoticons, 10);
    // cout << emoticons << " ";

    // There is an issue:
    // after entering the number when the user presses the enter to input the string, the output will be only the number entered.
    int age;
    cout << "Enter Your Age: ";
    // cin >> age;

    // // we have to clear a buffer before taking new line;
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // char str[40];
    // cout << "Enter your NickName: ";
    // cin.get(str, 40);
    // cout << "Your age = " << age << " Your Name = " << str << "\n";
    // cin.ignore(numeric_limits<streamsize>::max(),
    //            '\n');
    // char words[1001];
    // fill_n(words, 1001, ' ');
    // cin.getline(words, 1001);
    // cout << words << endl;
    // int count = 0;
    // int *c = &count;
    // char *ptr1 = &words[0];
    // char **ptr3 = &ptr1;
    // int **ptr2 = &c;
    // string str = "";
    // while (**ptr3 != '\0')
    // {
    //     str += **ptr3;
    //     *ptr3 += 1;
    // }
    // cout << str.size() << endl;
    // int count = 0;
    // for (int i = 0; i < str.size(); i++)
    // {
    //     if (str[i] == ' ')
    //     {
    //         count += 1;
    //     }
    // }
    // cout << count << endl;
    // cout << count;

    int *ptr11 = getPointer();
    return 0;
}