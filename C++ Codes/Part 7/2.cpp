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

    cout << "Choose operation: " << endl
         << "\t1. Addition" << endl
         << "\t2. Substraction" << endl
         << "\t3. Multiplication" << endl
         << "\t4. Devidation" << endl;
    int key;
    cin >> key;
    if (key == 1)
        cout << "Addition of " << a << " & " << b << " is: " << (a + b) << endl;
    else if (key == 2)
        cout << "Substraction of " << a << " & " << b << " is: " << (a - b) << endl;
    else if (key == 3)
        cout << "Multiplication of " << a << " & " << b << " is: " << (a * b) << endl;
    else if (key == 4)
        cout << "Devidation of " << a << " & " << b << " is: " << ((float)a / (float)b) << endl;
    else
        cout << "Invalide operation!" << endl;
    return 0;
}