#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter a 3 digit number: ";
    cin >> m;
    n = m;
    int rev = 100 * (n % 10);
    n = n / 10;
    rev = rev + (10 * (n % 10));
    n = n / 10;
    rev = rev + n % 10;

    if (rev == m)
    {
        cout << m << " is a palindrome number" << endl;
    }
    else
    {
        cout << m << " is not a palindrome number" << endl;
    }

    return 0;
}