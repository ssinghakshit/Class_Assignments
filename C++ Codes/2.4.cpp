#include <iostream>
using namespace std;

int main()
{
	int i,j,k;
	cout<< "input 3 numbers\n";
	cin>>i>>j>>k;
	
	if(i<j && i<k)
	{
		if(j<k)
			cout<<"acsending order "<<i<<", "<<j<<" and "<<k<<endl;
		else
			cout<<"acsending order "<<i<<", "<<k<<" and "<<j<<endl;
	}
	else if(j<i && i<k)
	{
		if(i<k)
			cout<<"acsending order "<<j<<", "<<i<<" and "<<k<<endl;
		else
			cout<<"acsending order "<<j<<", "<<k<<" and "<<i<<endl;
	}
	else
	{
		if(i<j)
			cout<<"acsending order "<<k<<", "<<i<<" and "<<j<<endl;
		else
			cout<<"acsending order "<<k<<", "<<j<<" and "<<i<<endl;
	}

	return 0;
}


