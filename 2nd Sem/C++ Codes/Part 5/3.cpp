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

    (a + b > c && a + c > b && b + c > a) ? cout << a + b + c : cout << "0";
    cout << endl;

    return 0;
}