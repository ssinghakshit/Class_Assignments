#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number to check: ";
    cin >> n;

    n % 2 == 0 ? (cout << "Even") : (cout << "Odd");

    return 0;
}