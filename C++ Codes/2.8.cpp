#include <iostream>
using namespace std;

int main()
{
	int i,j,k;
	cout<<"input 3 numbers: \n";
	cin>>i>>j>>k;
	
	i<j?(i<k?(cout<<i<<" is lowest"):(cout<<k<<" is lowest")):(j<k?(cout<<j<<" is lowest"):(cout<<k<<" is lowest"));


	return 0;
}


