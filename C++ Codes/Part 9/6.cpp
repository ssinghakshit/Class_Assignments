#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        cout <<n<<" is Perfect" << endl;
    }
    else
    {
        cout <<n<<" is Not perfect" << endl;
    }

    return 0;
}