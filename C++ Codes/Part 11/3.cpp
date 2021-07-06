#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a integer number: ";
    cin >> n;
    int m = n;
    int binary = 0;
    int i = 1;
    while (n != 0)
    {
        binary = binary + i * (n % 2);
        n /= 2;
        i = i * 10;
    }
    cout << "Binary form of " << m << " is: " << binary << endl;

        return 0;
}