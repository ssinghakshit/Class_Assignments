#include <bits/stdc++.h>
using namespace std;
int LCM(int a, int b)
{
    int max = a > b ? a : b;
    int min = a < b ? a : b;
    int j = 1;
    for (int i = max; i <= (a * b); i = max * j)
    {
        if (i % min == 0)
        {
            return i;
        }
        j++;
    }
    return a * b;
}
int GCD(int a, int b)
{
    return ((a * b) / LCM(a, b));
}

int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    int lcm = LCM(a, b);
    cout << "LCM of " << a << " & " << b << " is: " << lcm << endl;
    int gcd = GCD(a, b);
    cout << "GCD of " << a << " & " << b << " is: " << gcd << endl;

    return 0;
}