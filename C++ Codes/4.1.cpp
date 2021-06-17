#include <iostream>
using namespace std;

int main()
{
	int i,revNum=0;
	cout<<"input a number to check palindrome: ";
	cin>>i;
	
	for(int j=i;j>0;j=j/10)
	{
		int k=j%10;
		revNum=(revNum*10)+k;
	}
	if(i==revNum)
		cout<<endl<<i<<" is palindrome\n";
	else
		cout<<endl<<i<<" is not palindrome\n";


	return 0;
}


