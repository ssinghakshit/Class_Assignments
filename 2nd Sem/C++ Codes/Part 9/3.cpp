#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int m = n;
    int rev = 0;
    while (n != 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    if (rev == m)
    {
        cout << m << " is a palindrome number" << endl;
        return 0;
    }
    cout << m << " is not a palindrome number" << endl;
    return 0;
}