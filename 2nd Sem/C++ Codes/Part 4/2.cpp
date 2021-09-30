#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter a 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;

    a = a^b;
    b = a^b;
    a = a^b;

    cout<<"First number: "<<a<<endl;
    cout<<"Second number: "<<b<<endl;

    return 0;
}