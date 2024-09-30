#include <iostream>
using namespace std;

const int c = 50;
void add(int **mat, int r1, int c1, int **mat2, int r2, int c2)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << mat[i][j] << endl;
        }
    }
    // for addition of two matrix the row of one column is equal to row of second mat and col of mat1 is == to col of mat2
    if (r1 == r2 && c1 == c2)
    {
        int **mat3 = new int *[r1];
        for (int i = 0; i < r1; i++)
        {
            mat3[i] = new int[c2];
        }

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                mat3[i][j] = mat[i][j] + mat2[i][j];
            }
        }
        cout << "After adding " << endl;
        ;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << mat3[i][j] << endl;
            }
        }
    }
}
void multiply(int **mat, int r1, int c1, int **mat2, int r2, int c2)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << mat[i][j] << endl;
        }
    }
    // for addition of two matrix the row of one column is equal to col of second mat
    if (r1 == c2)
    {
        int **mat3 = new int *[r1];
        for (int i = 0; i < r1; i++)
        {
            mat3[i] = new int[c2];
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                mat3[i][j] = 0;
            }
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                for (int k = 0; k < c2; k++)
                {
                    mat3[i][j] += mat[i][k] * mat2[k][j];
                }
            }
        }
        cout << "After multiplication " << endl;
        ;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << mat3[i][j] << endl;
            }
        }
    }
}
int main()
{
    cout << "Enter row and col for matrix 1: " << endl;
    int r1, c1;
    cin >> r1 >> c1;
    int **mat1 = new int *[r1];
    for (int i = 0; i < r1; i++)
    {
        mat1[i] = new int[c1];
    }

    cout << "Enter the Elements in mat1 = " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter row and col for matrix 2: " << endl;
    int r2, c2;
    cin >> r2 >> c2;
    int **mat2 = new int *[r2];
    for (int i = 0; i < r2; i++)
    {
        mat2[i] = new int[c2];
    }

    cout << "Enter the Elements in mat2 = " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> mat2[i][j];
        }
    }
    multiply(mat1, r1, c1, mat2, r2, c2);
    return 0;
}