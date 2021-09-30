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

    cout << "Enter operation (+, -, *, /): ";
    char op;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "Addition of " << a << " & " << b << " is: " << (a + b) << endl;
        break;
    case '-':
        cout << "Substraction of " << a << " & " << b << " is: " << (a - b) << endl;
        break;
    case '*':
        cout << "Multiplication of " << a << " & " << b << " is: " << (a * b) << endl;
        break;
    case '/':
        cout << "Devidation of " << a << " & " << b << " is: " << ((float)a / (float)b) << endl;
        break;
    default:
        cout << "Invalide operation!" << endl;
    }
    return 0;
}