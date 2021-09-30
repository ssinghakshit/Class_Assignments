#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    cout << "Enter 3rd number: ";
    cin >> c;

    cout << "Max among " << a << ", " << b << " & " << c << " is: ";
    a > b ? (a > c ? (cout << a) : cout << c) : (b > c ? (cout << b) : (cout << c));

    return 0;
}