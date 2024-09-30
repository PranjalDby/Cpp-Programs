#include <iostream>
using namespace std;

class MatrixSum
{
public:
    int r, c;
    void printSum(int *mat[], int r);
};

void MatrixSum::printSum(int *mat[], int r)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    // int mat[2][1] = {{20}, {30}};

    // MatrixSum ss;
    // int *ptr[2];
    // for (int i = 0; i < 2; i++)
    // {
    //     ptr[i] = mat[i];
    // }
    // ss.printSum(ptr, 2);
    string str = "123-456-7890";
    int flag = 1;
    if (str.size() != 12)
    {

        if (str[3] != '-' or str[7] == '-')
        {
            flag = 0;
        }
        if (flag)
        {
            cout << "true";
            str.erase(3, 1);
            str.erase(6, 1);
            cout << str;
        }
        cout
            << flag;
        return 0;
    }