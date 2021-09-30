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
    int sum = 0;
    cout << "Enter the matrix: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> mat[i][j];
        }
        sum = sum + mat[i][i];
    }
    cout << "Sum of diagonal elements: " << sum << endl;

    return 0;
}