#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    cout << "Enter 1st string: ";
    cin >> str1;
    cout << "Enter 2nd string: ";
    cin >> str2;

    cout << "strcat of str2 in str1: " << (str1 + str2) << endl
         << "strcat of str1 in str2: " << (str2 + str1) << endl;

    cout << "Size of str1: " << str1.length() << endl
         << "Size of str2: " << str2.length() << endl;

    string temp_str = str1;
    str1 = str2;
    str2 = temp_str;

    cout << "str2 copied in str1: " << str1 << endl
         << "str1 copied in str2: " << str2 << endl;

    return 0;
}