#include <bits/stdc++.h>
using namespace std;
float sine(float x, int n)
{
    x = x * 3.14159 / 180;
    float t = x;
    float sum = x;
    for (int i = 1; i <= n; i++)
    {
        t = (t * (-1) * x * x) / (2 * i * (2 * i + 1));
        sum = sum + t;
    }
    return sum;
}

int main()
{
    int n;
    float x;
    cout << "Enter the value for x : ";
    cin >> x;

    cout << " Enter the value for n : ";
    cin >> n;

    cout << "The value of Sin(" << x << ") is: " << sine(x, n) << endl;
    return 0;
}