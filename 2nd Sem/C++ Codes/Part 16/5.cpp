#include <bits/stdc++.h>
using namespace std;
void naturalNumber(int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << i << " ";
    }
}
int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    cout << "Natural numbers upto " << n << " is: ";
    naturalNumber(n);

    return 0;
}