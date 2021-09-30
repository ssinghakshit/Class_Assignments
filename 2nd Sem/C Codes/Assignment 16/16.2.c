#include<stdio.h>
int adding_digits(int a)
{
	int remainder,sum=0;
	while(a!=0)
	{
		remainder= a%10;
		sum=sum+remainder;
		a=a/10;
	}
	return sum;
}

int main()
{
	int result=adding_digits(12345);
	printf("after adding digits number, the sum is %d \n",result);
	return 0;
}
