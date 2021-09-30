#include <iostream>
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

    float s = (a + b + c) / 2.0;
    float area = s * (s - a) * (s - b) * (s - c);
    cout << "Area of the triangle: " << area << endl;

    return 0;
}