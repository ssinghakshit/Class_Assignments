#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    int n = str.length();
    int j = n - 1;
    for (int i = 0; i < (n + 1) / 2; i++)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
    }

    cout << "Reverse of the string: " << str << endl;

    return 0;
}