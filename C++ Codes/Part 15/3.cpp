#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, column;
    cout << "Enter Row of the matrix: ";
    cin >> row;
    cout << "enter column of the matrix: ";
    cin >> column;
    int mat[row][column];
    int mat2[row][column];
    cout << "Enter first matrix: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << "Enter second matrix: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> mat2[i][j];
            if (mat[i][j] != mat2[i][j])
            {
                cout << endl
                     << "Matrices are not equal" << endl;
                return 0;
            }
        }
    }

    cout << endl
         << "Matrices are equal" << endl;
    return 0;
}