#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a;
    cout << "Enter a charecter: ";
    cin >> a;
    if (a >= 'a' && a <= 'z')
    {
        cout << "Uppercase: " << (char)(a - 32) << endl;
        return 0;
    }
    else if (a >= 'A' && a <= 'Z')
    {
        cout << a << " is already uppercase" << endl;
        return 0;
    }
    cout << "Not charecter!" << endl;
    return 0;
}