#include <iostream>
using namespace std;

int main()
{
    int a,b,area,cir;

    cout<<"Input length of the rectangle: ";
    cin>>a;
    cout<<"Input breadth of the rectangle: ";
	cin>>b;
	
    area=a*b;
    cir=2*(a+b);

    cout<<endl<<"Area of the rectangle is: "<<area<<endl<<"circumference of the rectangle is: "<<cir<<endl;

	return 0;
}

