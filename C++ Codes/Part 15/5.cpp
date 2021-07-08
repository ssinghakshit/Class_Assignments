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
    int rowSum[row] = {0};
    int colSum[column] = {0};
    cout << "Enter the matrix: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> mat[i][j];
            rowSum[i] = rowSum[i] + mat[i][j];
        }
    }
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            colSum[i] = colSum[i] + mat[j][i];
        }
    }
    for (int i = 0; i < row; i++)
    {
        cout << "Sum of all elements in row: " << i + 1 << " : " << rowSum[i] << endl;
    }
    for (int i = 0; i < column; i++)
    {
        cout << "Sum of all elements in column: " << i + 1 << " : " << colSum[i] << endl;
    }

    return 0;
}