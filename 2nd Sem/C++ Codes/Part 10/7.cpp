#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout << "Enter number of rows: ";
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            char a = 'A';
            cout << char(a + j) << " ";
        }
        cout << endl;
    }

    return 0;
}