/*
Name: Tasnimur Rahaman Anas
Roll: 20051762

Problem:
WAP illustrating the execution of constructors in multi-level inheritance
with three classes – plate(length, width), box(length, width, height), wood
box (length, width, height, thick).

*/

#include <bits/stdc++.h>
using namespace std;
class Plate_762
{
protected:
    float length_762;
    float width_762;

public:
    Plate_762()
    {
        cout << "Enter the length and width : ";
        cin >> length_762 >> width_762;
    }
};
class Box_762 : public Plate_762
{
protected:
    float height_762;

public:
    Box_762()
    {
        cout << "Enter the heigth : ";
        cin >> height_762;
    }
};

class WoodBox_762 : public Box_762
{
protected:
    float thick_762;

public:
    WoodBox_762()
    {
        cout << "enter the thick : ";
        cin >> thick_762;
    }
    void display_762()
    {
        cout << "The length of plate: " << length_762 << endl;
        cout << "The width of plate: " << width_762 << endl;
        cout << "The height of box: " << height_762 << endl;
        cout << "The thick of woodBox: " << thick_762 << endl;
    }
};

int main()
{
    WoodBox_762 w1;
    w1.display_762();
    return 0;
}