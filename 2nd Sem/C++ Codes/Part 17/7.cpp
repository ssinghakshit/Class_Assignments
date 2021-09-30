#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    swap(&a, &b);
    cout << "After swap: " << endl
         << "A: " << a << endl
         << "B: " << b << endl;
    return 0;
}