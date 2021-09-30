#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int n, r;
    cout << "Enter N: ";
    cin >> n;
    cout << "Enter R: ";
    cin >> r;
    double ncr = fact(n) / (fact(n - r) * fact(r));
    cout << "nCr = " << ncr << endl;

    return 0;
}