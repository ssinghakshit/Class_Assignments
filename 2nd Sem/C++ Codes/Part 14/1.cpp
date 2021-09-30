#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    cout << "Inputted string: " << str << endl
         << "String size: " << i << endl;

    return 0;
}