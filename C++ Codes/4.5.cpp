#include <iostream>
using namespace std;

int main()
{
	int z;
	cout<<"input how many rows you want: ";
	cin>>z;
	cout<<endl;
	for(int r=0;r<z;r++)
	{
		int s;
		for(s=(z-1); s>r;s--)
		{
			cout<<"     ";
		}
		for (int i=0;i<=s;i++)
		
		{

			cout<<i+1<<"    ";
		}
		for (int i=s;i>0;i--)
		{

			cout<<i<<"    ";
		}
		cout<<endl;
	}

	return 0;
}

