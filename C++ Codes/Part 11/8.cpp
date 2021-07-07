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
    cout << "Array: ";
    int sum = 0;
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
        sum = sum + arr[j];
    }
    cout << endl;
    cout << "Sum: " << sum << endl;
    cout << "Avarage: " << float(sum / n) << endl;

    return 0;
}