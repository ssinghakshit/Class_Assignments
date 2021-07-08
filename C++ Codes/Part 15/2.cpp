#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, p, q, sum = 0;
    cout << "Enter number of rows and columns of first matrix: ";
    cin >> m >> n;

    int first[m][n];
    cout << "Enter elements of first matrix: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> first[i][j];
        }
    }

    cout << "Matrix 1: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << first[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Enter number of rows and columns of second matrix: ";
    cin >> p >> q;

    if (n != p)
    {
        cout << "The multiplication isn't possible." << endl;
        return 0;
    }
    int second[p][q], multiply[m][q];
    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> second[i][j];
        }
    }

    cout << "Matrix 2:" << endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << second[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            for (int k = 0; k < p; k++)
            {
                sum = sum + first[i][k] * second[k][j];
            }
            multiply[i][j] = sum;
            sum = 0;
        }
    }
    cout << "Product of the matrices:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << multiply[i][j] << "\t";
        }
        cout << endl;
    }
}