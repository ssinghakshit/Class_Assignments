#include <iostream>
using namespace std;

int main()
{
    cout << "Enter first integer: ";
    int a;
    cin >> a;
    cout << "Enter second integer: ";
    int b;
    cin >> b;
    cout << "Addition of " << a << " & " << b << " is: " << (a + b) << endl;
    cout << "Substraction of " << a << " & " << b << " is: " << (a - b) << endl;
    cout << "Multiplication of " << a << " & " << b << " is: " << (a * b) << endl;
    cout << "Devidation of " << a << " & " << b << " is: " << ((float)a / (float)b) << endl;

    return 0;
}