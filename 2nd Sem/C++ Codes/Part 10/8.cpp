#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout << "Enter number of rows: ";
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << j + 1 << " ";
            }
        }
        else
        {
            for (int j = i + 1; j >= 1; j--)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}