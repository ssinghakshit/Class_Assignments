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
    int j = n - 1;
    for (int i = 0; i < (n + 1) / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}