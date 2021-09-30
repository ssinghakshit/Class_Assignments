#include <bits/stdc++.h>
using namespace std;

void fibo(int n)
{
    int a = 0;
    cout << a << " ";
    int b = 1;
    while (b <= n)
    {
        cout << b << " ";
        int x = a;
        a = b;
        b = b + x;
    }
}

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    fibo(n);
    return 0;
}