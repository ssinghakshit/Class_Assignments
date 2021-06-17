#include <iostream>
using namespace std;

int main()
{
	char x;
	cout<<"input a charecter to check: ";
	cin>>x;
	

	if ((x>='a' && x<='z') || (x>='A' && x<='Z'))
	{
		if(x>='a' && x<='z')
		{
			cout<<x<<" is lowercase\n";
			if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
				cout<<x<<" is vowel\n";
			else
				cout<<x<<" is consonant\n";
		}

		else
		{
			cout<<x<<" is uppercase\n";	
			if(x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
				cout<<x<<" is vowel\n";
			else
				cout<<x<<" is consonant\n";
		}

	}
	else
		cout<<"invalid input\n";
		

	return 0;
}


