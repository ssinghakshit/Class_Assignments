#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    cout << "Enter C: ";
    cin >> c;

    int d = (b * b) - (4 * a * c);

    if (d < 0)
    {
        cout << "Complex root" << endl;
        return 0;
    }

    float result1 = (-b + sqrt(d)) / (2.0 * a);

    if (d == 0)
    {
        cout << "Root: " << result1 << endl;
        return 0;
    }

    float result2 = (-b - sqrt(d)) / (2.0 * a);
    cout << "Root 1: " << result1 << endl
         << "Root 2: " << result2 << endl;

    return 0;
}