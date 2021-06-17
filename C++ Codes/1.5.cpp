#include <iostream>
using namespace std;

int main()
{
	int a,b,c,d,e,sum;
	float avg;
	cout<< "Input 1st number: ";
	cin>>a;
	cout<< "Input 2nd number: ";
	cin>>b;
	cout<< "Input 3rd number: ";
	cin>>c;
	cout<< "Input 4th number: ";
	cin>>d;
	cout<< "Input 5th number: ";
	cin>>e;
	
	sum= a+b+c+d+e;
	avg= sum/5.0;
	
	cout <<endl<<"Sum of "<<a<<","<<b<<","<<c<<","<<d<<" & "<<e<<" is = "<<sum<<endl;
	cout <<"Avarage of "<<a<<","<<b<<","<<c<<","<<d<<" & "<<e<<" is = "<<avg<<endl;

	return 0;
}

