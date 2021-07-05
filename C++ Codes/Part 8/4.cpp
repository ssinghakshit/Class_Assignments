#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int c = 0;
        for (int j = 2; j <= (i + 1) / 2; j++)
        {
            if (i % j == 0)
            {
                c = 1;
            }
        }
        if (c == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}