#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a;
    cout << "Enter a charecter: ";
    cin >> a;
    char b = tolower(a);
    if (b <= 'z' && b >= 'a')
    {
        cout << a << " is a letter" << endl;
    }
    else if (a <= '9' && a >= '0')
    {
        cout << a << " is a number" << endl;
    }
    else
    {
        cout << a << " is a special charecter" << endl;
    }
    return 0;
}