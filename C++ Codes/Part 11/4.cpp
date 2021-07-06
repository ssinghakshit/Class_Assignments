#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    return (fact(n)/(fact(n-r)*fact(r)));
}

int main()
{
    int row;
    cout << "Enter number of rows: ";
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << nCr(i,k)<<" ";
        }

        cout << endl;
    }

    return 0;
}