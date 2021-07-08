#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, column;
    cout << "Enter Row of the matrix: ";
    cin >> row;
    cout << "enter column of the matrix: ";
    cin >> column;
    if (row != column)
    {
        cout << "Not a square matrix" << endl;
        return 0;
    }
    int mat[row][column];
    int upmat[row][column];
    int lowmat[row][column];
    cout << "Enter the matrix: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << endl
         << "Upper triangle: " << endl;
    int y = column;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << mat[i][j] << "  ";
        }
        cout << endl;
        y--;
    }
    cout << endl
         << "Lower triangle: " << endl;
    y = column - 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (j >= y)
            {
                cout << mat[i][j] << "  ";
            }
            else
            {
                cout << "   ";
            }
        }
        y--;
        cout << endl;
    }
    cout << endl;

    return 0;
}