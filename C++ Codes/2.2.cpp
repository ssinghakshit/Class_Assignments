#include <iostream>
using namespace std;

int main()
{
	int i,j;
	
	cout<< "input 2 numbers\n";
	cin>>i>>j;
	
	if (i>j)
		cout<<i<<" is greater\n";
	else if (i<j)
		cout<<j<<" is greater\n";
	else
		cout<<i<<" and "<<j<<" is equal\n";
		

	return 0;
}


