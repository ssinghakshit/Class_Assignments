#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a 3 digit number: ";
    cin >> n;

    int rev = 100 * (n % 10);
    n = n / 10;
    rev = rev + (10 * (n % 10));
    n = n / 10;
    rev = rev + n % 10;

    cout << "Reversed number is: " << rev << endl;

    return 0;
}