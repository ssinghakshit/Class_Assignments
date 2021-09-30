#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a;
    cout << "Enter a charecter: ";
    cin >> a;

    char b = tolower(a);
    if (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u')
    {
        cout << a << " is vowel" << endl;
        return 0;
    }
    else if (b >= 'a' && b <= 'z')
    {
        cout << a << " is consonant" << endl;
        return 0;
    }
    cout << "Not charecter!" << endl;
    return 0;
}