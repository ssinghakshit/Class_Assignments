/*
Name: Tasnimur Rahaman Anas
Roll: 20051762

Problem:
WAP with a mother class and an inherited daughter class. Both of them
should have a method void display () that prints a message (different for
mother and daughter). In the main function, define a daughter object and call
the display() method on it.

*/

#include <bits/stdc++.h>
using namespace std;

class Mother_762
{
public:
    void display_762()
    {
        cout << "Mother class function" << endl;
    }
};

class Daughter_762 : public Mother_762
{
public:
    void display_762()
    {
        cout << "Daughter class function" << endl;
    }
};

int main()
{
    Daughter_762 d;
    d.display_762();
    return 0;
}