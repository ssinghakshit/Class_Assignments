/*
Name: Tasnimur Rahaman Anas
Roll: 20051762

Problem:
A plastic manufacturer sells plastic in different shapes like 2D sheet and 3D
box. The cost of sheet is Rs 40/ per square ft. and the cost of box is Rs 60/
per cubic ft. WAP to calculate the cost of plastic as per the dimensions given
by the user.

*/

#include <bits/stdc++.h>
using namespace std;

class Box_762
{
private:
    unsigned int price_762;

public:
    Box_762()
    {
        price_762 = 60;
    }
    void totalPrice_762(int x)
    {
        cout << "price of 3D Boxes are : " << (price_762 * x) << endl;
    }
};

class Sheet_762
{
private:
    unsigned int price_762;

public:
    Sheet_762()
    {
        price_762 = 40;
    }
    void totalPrice_762(int x)
    {
        cout << "price of 2D Sheets are : " << (price_762 * x) << "\n";
    }
};

int main()
{
    Box_762 b;
    Sheet_762 s;
    unsigned int x;
    cout << "enter the number of 3D boxes : ";
    cin >> x;
    b.totalPrice_762(x);
    cout << "enter the number of 2D Sheets : ";
    cin >> x;
    s.totalPrice_762(x);
    return 0;
}