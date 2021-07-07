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
    for (int i = 0; i < n; i = i + 2)
    {
        int temp = arr[i];
        arr[i] = ((i + 1) > (n - 1)) ? arr[i] : arr[i + 1];
        arr[i + 1] = temp;
    }
    cout << "Array after swapping: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}