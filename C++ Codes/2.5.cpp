#include <iostream>
using namespace std;

int main()
{
	int x;
    cout<<"input mark:";
    cin>>x;
    
    if (x>=0 && x<40)
        cout<<"Your grade for "<<x<<" mark is: F\n";
    else if (x>=40 && x<=49)
        cout<<"Your grade for "<<x<<" mark is: D\n";
    else if (x>=50 && x<=59)
        cout<<"Your grade for "<<x<<" mark is: C\n";
    else if (x>=60 && x<=69)
        cout<<"Your grade for "<<x<<" mark is: B\n";
    else if (x>=70 && x<=79)
        cout<<"Your grade for "<<x<<" mark is: A\n";
    else if (x>=80 && x<=89)
        cout<<"Your grade for "<<x<<" mark is: E\n";
    else if (x>=90 && x<=100)
        cout<<"Your grade for "<<x<<" mark is: O\n";
    else
        cout<<"Invalid mark\n";



	return 0;
}


