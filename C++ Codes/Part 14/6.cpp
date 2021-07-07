#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, str1;
    cout << "Enter a string: ";
    getline(cin, str);
    for (int i = str.length() - 1; i >= 0; i--)
    {
        str1 = str1 + str[i];
    }
    if (str == str1)
    {
        cout << "Your string is palindrome" << endl;
        return 0;
    }
    cout << "Your string is not palindrome" << endl;

    return 0;
}