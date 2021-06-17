#include <iostream>
using namespace std;

int main()
{
	int n=1;
	for(int r=1; r<=4;r++)
	{
		for(int j=1; j<=r;j++)
		{
			cout<< n<<"   ";
			n++;
		}
		cout<<endl;
	}
		

	return 0;
}

