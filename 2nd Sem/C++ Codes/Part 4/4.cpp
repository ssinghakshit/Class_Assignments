#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;

    cout << "Max among " << a << " & " << b << " is: ";
    a > b ? (cout << a) : (cout << b);

    return 0;
}