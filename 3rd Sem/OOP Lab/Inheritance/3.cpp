/*
Name: Tasnimur Rahaman Anas
Roll: 20051762

Problem:
WAP that defines a shape class with a constructor that gives value to width
and height. Then define two sub-classes triangle and rectangle, that calculate
the area of the shape. In the main, define two variables a triangle and one
variable of rectangle and then call the area() function for those variables.

*/

#include <bits/stdc++.h>
using namespace std;

class Shape_762
{
protected:
    float height_762;
    float width_762;

public:
    Shape_762() {}
    Shape_762(float a, float b)
    {
        height_762 = a;
        width_762 = b;
    }
};

class Rectangle_762 : private Shape_762
{
public:
    Rectangle_762(float a, float b) : Shape_762(a, b) {}
    void area_762()
    {
        cout << "Area of rectangle: " << height_762 * width_762 << endl;
    }
};

class Triangle_762 : private Shape_762
{
public:
    Triangle_762(float a, float b) : Shape_762(a, b) {}
    void area_762()
    {
        cout << "Area of triangle: " << 0.5 * height_762 * width_762 << endl;
    }
};

int main()
{
    float h, w;
    cout << "Enter height: ";
    cin >> h;
    cout << "Enter width: ";
    cin >> w;
    Rectangle_762 r(h, w);
    r.area_762();
    Triangle_762 t(h, w);
    t.area_762();
}