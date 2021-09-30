#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout << "Enter number of rows: ";
    cin >> x;

    for (int i = 1; i < x; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* *  ";
        }
        cout << endl;
    }

    return 0;
}
