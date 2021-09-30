/*
Name: Tasnimur Rahaman Anas
Roll: 20051762

Problem:
Consider the following two points in a 3D space. WAP to input and calculate
the Euclidean distance and Manhattan distance between the two points.

Euclidean distance : sqrt((x1-x)^2 + (y1-y)^2 + (z1-z)^2)
Manhattan distance : |x2-x1| + |y2 – y1| + |z2 – z1|
*/

#include <bits/stdc++.h>
using namespace std;

class Distance_762
{
protected:
    float x_762;
    float y_762;
    float z_762;
    float x1_762;
    float y1_762;
    float z1_762;

public:
    Distance_762()
    {
        cout << "enter the 1st point (x,y,z): ";
        cin >> x_762 >> y_762 >> z_762;
        cout << "enter 2nd point (x1,y1,z1): ";
        cin >> x1_762 >> y1_762 >> z1_762;
    }
};

class Euclidean_762 : private Distance_762
{
public:
    void display_762()
    {
        cout << "Distance betweden 2 points : " << sqrt(pow(x1_762 - x_762, 2) + pow(y1_762 - y_762, 2) + pow(z1_762 - z_762, 2));
    }
};
class Manhattan_762 : private Distance_762
{
public:
    void display_762()
    {
        cout << "Distance betweden 2 points : " << fabs(x1_762 - x_762) + fabs(y1_762 - y_762) + fabs(z1_762 - z_762);
    }
};
int main()
{
    Euclidean_762 e;
    e.display_762();
    cout << endl;
    Manhattan_762 m;
    m.display_762();
    return 0;
}