#include <bits/stdc++.h>
using namespace std;
int addition(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    int sum = addition(a, b);
    cout << "Sum of " << a << " & " << b << " is: " << sum << endl;

    return 0;
}