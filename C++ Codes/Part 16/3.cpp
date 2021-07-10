#include <bits/stdc++.h>
using namespace std;

char caseChange(char a)
{
    if (a <= 'z' && a >= 'a')
    {
        return char(toupper(a));
    }
    else
    {
        return char(tolower(a));
    }
}

int main()
{
    char a;
    cout << "Enter a charecter: ";
    cin >> a;
    char result = caseChange(a);
    cout << "Oppossit case of " << a << " is: " << result << endl;

    return 0;
}