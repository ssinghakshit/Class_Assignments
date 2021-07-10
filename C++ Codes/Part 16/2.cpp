#include <bits/stdc++.h>
using namespace std;

int numberSum(int n)
{
    int m = n;
    int sum = 0;
    while (m != 0)
    {
        sum = sum + m % 10;
        m /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = numberSum(n);
    cout << "Sum of all digits is: " << sum << endl;

    return 0;
}