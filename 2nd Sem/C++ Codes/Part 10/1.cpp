#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;

    int sum = 0;
    int i = 1;
    while (i <= n)
    {
        int k = 0;
        for (int j = 1; j <= i; j++)
        {
            k = k + j;
        }

        sum = sum + k;
        i++;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}