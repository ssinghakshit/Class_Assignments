#include <iostream>
using namespace std;

int main()
{
	int i,j,k;
	
	cout<< "input 3 numbers\n";
	cin>>i>>j>>k;
	
	
	if (i>j && i>k)
	{
		cout<<i<<" is greater\n";
	}
	else if (j>i && j>k)
	{
		cout<<j<<" is greater\n";
	}
	else if (k>i && k>j)
	{
		cout<<k<<" is greater\n";
	}
	

	if (i<j && i<k)
	{
		cout<<i<<" is smaller\n";
	}
	else if (j<i && j<k)
	{
		cout<<j<<" is smaller\n";
	}
	else if (k<i && k<j)
	{
		cout<<k<<" is smaller\n";
	}
			


		

	return 0;
}

