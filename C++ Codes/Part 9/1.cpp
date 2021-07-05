#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    int a = 1;
    int b = 2;
    cout << "1 ";
    while(n>b)
    {
        cout << b << " ";
        int c = b;
        b = b + a;
        a = c;
    }

    return 0;
}