#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    int m = n;

    int sum = 0;
    while (n != 0)
    {
        sum = sum + pow(n % 10, 3);
        n = n / 10;
    }

    if (m == sum)
    {
        cout << m << " is an armstrong number" << endl;
        return 0;
    }
    cout << m << " is not an armstrong number" << endl;
    return 0;
}