#include <bits/stdc++.h>
using namespace std;

int arrayAddition(int arr[], int n, int i)
{
    while(i<n)
    {
        return arr[i] + arrayAddition(arr,n, i+1);
    }
    return 0;

}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter values to array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = arrayAddition(arr, n,0);
    cout << "Sum of all integers in the array: " << sum << endl;

    return 0;
}