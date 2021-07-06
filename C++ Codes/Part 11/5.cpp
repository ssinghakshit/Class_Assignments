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
int main()
{
    int n, x;
    cout << "Enter X: ";
    cin >> x;
    cout << "Enter N: ";
    cin >> n;

    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + ((pow(x, i)) / fact(i));
    }
    cout << "Sum of the series: " << sum << endl;

    return 0;
}