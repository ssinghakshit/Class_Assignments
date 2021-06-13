#include <stdio.h>
void fibonacci(int number)
{
	int n1=0,n2=1,n3,i;
	printf("\n%d %d",n1,n2);
	for(i=2; i<number; ++i)
	{
		n3=n1+n2;
		printf(" %d",n3);
		n1=n2;
		n2=n3;
	}
}
int main()
{
	int number;
	printf("Enter the number of elements:");
	scanf("%d",&number);
	fibonacci(number);
	return 0;
}
