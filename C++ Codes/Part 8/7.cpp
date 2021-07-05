#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    int m = n;
    int sum = 0;
    while (m != 0)
    {
        sum += m % 10;
        m /= 10;
    }
    cout << "Sum of the numbers of the digit " << n << " is: " << sum << endl;

    return 0;
}