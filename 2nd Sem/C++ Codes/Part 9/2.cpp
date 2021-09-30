#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int m = n;
    int rev = 0;
    while(n!=0)
    {
        rev = rev*10 + (n % 10);
        n /= 10;
    }
    cout << "Reverse number is: " << rev << endl;

    return 0;
}