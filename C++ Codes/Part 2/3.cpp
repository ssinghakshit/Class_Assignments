#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    int temp = a;
    a = b;
    b = temp;

    cout << "A is: " << a << endl;
    cout << "B is: " << b << endl;

    return 0;
}