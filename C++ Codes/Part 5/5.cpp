#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    int s = printf("%*c%*c", a, ' ', b, ' ');
    cout << s << endl;

    return 0;
}