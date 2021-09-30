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

class Father_762
{
public:
    void display_762()
    {
        cout << "Father class function" << endl;
    }
};

class Son_762 : public Father_762
{
public:
    void display_762()
    {
        cout << "Son class function" << endl;
    }
};

int main()
{
    Son_762 d;
    d.display_762();
    return 0;
}
