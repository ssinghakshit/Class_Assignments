#include <iostream>
using namespace std;

int main()
{
	int num,i,a,b,c,d,sum;
	cout<<"Input a 4 digit number: ";
	cin>>num;
	i=num;
	
	a=i%10;
	i=i/10;
	b=i%10;
	i=i/10;
	c=i%10;
	i=i/10;
	d=i%10;
	
	sum=a+b+c+d;
	
	cout <<endl<< "Sum of digits from "<<num<< " is = "<<sum<<endl;
	
	return 0;
}

