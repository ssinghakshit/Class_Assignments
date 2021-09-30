#include <iostream>
using namespace std;

int main()
{
    int radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    float area = 3.14 * radius * radius;
    cout << "Area is: " << area << endl;
    float circumference = 2 * 3.14 * radius;
    cout << "Circumference is: " << circumference << endl;

    return 0;
}