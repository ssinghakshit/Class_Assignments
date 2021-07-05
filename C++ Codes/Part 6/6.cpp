#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    cout << "Enter C: ";
    cin >> c;

    if (a > b && a > c)
    {
        cout << "Greater among " << a << ", " << b << " & " << c << " is: " << a << endl;
        return 0;
    }
    else if (b > a && b > c)
    {
        cout << "Greater among " << a << ", " << b << " & " << c << " is: " << b << endl;
        return 0;
    }
    cout << "Greater among " << a << ", " << b << " & " << c << " is: " << c << endl;
    return 0;

}