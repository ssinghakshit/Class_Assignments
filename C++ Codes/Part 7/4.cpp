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

    float grade = (math + phy + bee + aec) / 4.0;

    cout << "Total marks: " << total << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}