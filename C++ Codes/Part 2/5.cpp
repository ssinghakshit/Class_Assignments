#include <iostream>
using namespace std;

int main()
{
    int p, t, r;
    cout << "Enter P: ";
    cin >> p;
    cout << "Enter T: ";
    cin >> t;
    cout << "Enter R: ";
    cin >> r;

    cout << "Total interest: " << (p * t * r) << endl;

    return 0;
}