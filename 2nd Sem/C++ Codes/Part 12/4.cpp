#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " values to array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max && arr[i] % 2 == 0)
        {
            max = arr[i];
        }
    }
    cout << "Largest even integer: " << max << endl;

    return 0;
}