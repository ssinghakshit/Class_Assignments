#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array in reverse order: ";
    for (int j = n - 1; j >= 0; j--)
    {
        cout << arr[j] << " ";
    }
    cout << endl;

    return 0;
}