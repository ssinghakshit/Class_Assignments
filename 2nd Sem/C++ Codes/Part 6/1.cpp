#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;
    if (a > b)
    {
        cout << "Greater among " << a << " & " << b << " is: " << a << endl;
        return 0;
    }
    cout << "Greater among " << a << " & " << b << " is: " << b << endl;

    return 0;
}