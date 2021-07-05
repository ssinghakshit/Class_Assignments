#include <iostream>
using namespace std;

int main()
{
    int second;
    cout << "Enter value in second: ";
    cin >> second;

    int minute = second / 60;
    second = second % 60;

    cout << minute << " Minute " << second << " Second" << endl;

    return 0;
}