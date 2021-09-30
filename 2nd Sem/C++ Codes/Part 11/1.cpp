#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    n = n * fact(n - 1);
}

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    int m = n;

    int sum = 0;
    while (n != 0)
    {
        sum = sum + fact(n % 10);
        n = n / 10;
    }

    if (m == sum)
    {
        cout << m << " is an strong number" << endl;
        return 0;
    }
    cout << m << " is not an strong number" << endl;
    return 0;
}
