#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    int i = 0, count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
        i++;
    }
    cout << "Total vowel in the string: " << count << endl;

    return 0;
}