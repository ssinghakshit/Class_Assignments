#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int a = n >> 4;
    cout << a << endl;

    a = n << 4;
    cout << a << endl;

    return 0;
}