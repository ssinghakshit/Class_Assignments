#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"input how many rows you want: ";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			int k=j+64;
			cout<<"    "<<(char)k;
		}
		cout<<endl;
	}

	return 0;
}

