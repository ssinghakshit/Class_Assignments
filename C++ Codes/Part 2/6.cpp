#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a 3 digit number: ";
    cin >> n;
    cout << "First digit: " << (n / 100) << endl;
    cout << "Last digit: " << (n % 10) << endl;

    return 0;
}