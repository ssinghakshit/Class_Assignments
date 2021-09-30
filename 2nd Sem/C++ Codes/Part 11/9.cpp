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
    cout << "Even numbers of the array : ";
    for (int j = 0; j < n; j++)
    {
        if (arr[j] % 2 == 0)
            cout << arr[j] << " ";
    }
    cout << endl;

    return 0;
}