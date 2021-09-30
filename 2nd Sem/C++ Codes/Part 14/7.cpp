#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    str = " " + str;
    cout << "First charecter of each word: ";
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            cout << char(toupper(str[i + 1])) << " ";
        }
        i++;
    }
    cout << endl;

    return 0;
}