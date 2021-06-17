#include <iostream>
using namespace std;

int main()
{
	int i;
	cout<< "input a number to check: ";
	cin>>i;
	
	if(i<0)
		cout<<i<<" is negetive";
	else if(i>0)
		cout<<i<<" is positive";
	else
		cout<<i<<" is zero";

	return 0;
}


