#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout << "Enter number of rows: ";
    cin >> row;
    for (int i = row-1; i >= 0; i--)
    {
        for (int j = 0; j < row - i; j++)
        {
            cout << "  ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << k + 1 << " ";
        }
        for (int l = i; l >= 1; l--)
        {
            cout << l << " ";
        }
        cout << endl;
    }

    return 0;
}