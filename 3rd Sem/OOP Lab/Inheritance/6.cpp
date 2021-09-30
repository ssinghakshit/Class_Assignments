/*
Name: Tasnimur Rahaman Anas
Roll: 20051762

Problem:
WAP to represent a student class with roll no, name and section and a
test class (derived class of student) representing the scores of the
student in 5 subjects and sport class (derived class of student)
representing the score in a sport. The sport and test class should be
inherited by a result class having the functionality to add the scores and
display the final result for a student.

*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

class Student_762
{
protected:
    int roll_762;
    string name_762;
    string section_762;

public:
    Student_762()
    {
        cout << "Enter roll: ";
        cin >> roll_762;
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name_762);
        cout << "Enter section: ";
        cin >> section_762;
    }
};

class Test_762 : virtual protected Student_762
{
protected:
    int mark_762[5];

public:
    Test_762()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter mark in subject " << i + 1 << ": ";
            cin >> mark_762[i];
        }
    }
};
class Sport_762 : virtual protected Student_762
{
protected:
    int score_762;

public:
    Sport_762()
    {
        cout << "Enter score in sport: ";
        cin >> score_762;
    }
};

class Result_762 : private Test_762, private Sport_762
{
private:
    int total_762;

public:
    Result_762()
    {
        total_762 = score_762;
        for (int i = 0; i < 5; i++)
        {
            total_762 += mark_762[i];
        }
    }
    void display_762()
    {
        cout << endl
             << "Name: " << name_762 << endl
             << "Roll: " << roll_762 << endl
             << "Section: " << section_762 << endl
             << "Total mark: " << total_762 << endl;
    }
};

int main()
{
    Result_762 r;
    r.display_762();

    return 0;
}