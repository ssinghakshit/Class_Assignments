#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<< "input how many rows you want: ";
	cin>>n;
	cout<<endl;
	
	for(int i=1;i<=n;i++)
	{
		int k=1;
		for(int j=n;j>=i;j--)
		{
			cout<< k++ <<"   ";
		}
			cout<<endl;
	}



	return 0;
}


