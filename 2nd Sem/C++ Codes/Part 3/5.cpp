#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float p, n, r, t;
    cout << "Enter P: ";
    cin >> p;

    cout << "Enter R: ";
    cin >> r;

    cout << "Enter T: ";
    cin >> t;

    float interest = p * pow((1 + r / 100.0), t);

    cout << "Interest: " << interest << endl;

    return 0;
}