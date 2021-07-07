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
    int key;
    cout << "Enter number to search: ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            cout << key << " found in index: " << i << endl;
            return 0;
        }
    }
    cout << key << " Not found" << endl;

    return 0;
}