#include <iostream>
using namespace std;

int main()
{
    float c;
    cout << "Enter temparature in Celcius: "; //printf("");
    cin >> c; //scanf("%f",&c);

    float f = 32 + ((c / 5.0) * 9);
    cout << c << " degree Celcius in Farenhite is: " << f << endl;

    cout << "Enter temparature in Farenhite: ";
    cin >> f;

    c = (5 * (f - 32)) / 9.0;

    cout << f << " Farenhite in Celcius is: " << c << endl;

    return 0;
}