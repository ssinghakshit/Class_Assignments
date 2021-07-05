#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    int gcd = 1;
    for (int i = 2; i <= a; i++)
    {
        if (a % i == 0)
        {
            if (b % i == 0)
            {
                gcd = i;
            }
        }
    }
    cout << "GCD of " << a << " & " << b << " is: " << gcd << endl;
    int max = a, min = a;
    max = a > b ? a : b;
    min = a < b ? a : b;
    int lcd = a * b;
    int i = max;
    int j = 2;
    while (i < lcd)
    {
        if (i % min == 0)
        {
            lcd = i;
        }
        i = i * j;
        j++;
    }

    cout << "LCD of " << a << " & " << b << " is: " << lcd << endl;

    return 0;
}