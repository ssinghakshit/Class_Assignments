#include <bits/stdc++.h>
using namespace std;

int main()
{
    int math, bee, aec, phy;
    cout << "Enter marks in Math: ";
    cin >> math;
    cout << "Enter marks in BEE: ";
    cin >> bee;
    cout << "Enter marks in AEC: ";
    cin >> aec;
    cout << "Enter marks in Physics: ";
    cin >> phy;

    int total = math + phy + bee + aec;

    math = (math / 10) + 1;
    phy = (phy / 10) + 1;
    aec = (aec / 10) + 1;
    bee = (bee / 10) + 1;

    int grade = (math + phy + bee + aec) / 4;
    cout << "Total marks: " << total << endl;
    switch (grade)
    {
    case 10:
    case 9:
        cout << "Grade: E" << endl;
        break;
    case 8:
        cout << "Grade: O" << endl;
        break;
    case 7:
        cout << "Grade: A" << endl;
        break;
    case 6:
        cout << "Grade: B" << endl;
        break;
    case 5:
        cout << "Grade: C" << endl;
        break;
    case 4:
        cout << "Grade: D" << endl;
        break;
    case 3:
    case 2:
    case 1:
    case 0:
        cout << "Grade: F" << endl;
    }

    return 0;
}