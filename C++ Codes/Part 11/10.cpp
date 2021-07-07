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
    cout << "Largest number of the array : ";
    int max = arr[0];
    for (int j = 0; j < n; j++)
    {
        if (arr[j] > max)
            max = arr[j];
    }

    cout << max << endl;

    return 0;
}