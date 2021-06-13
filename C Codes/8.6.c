#include<stdio.h>

int main()
{
	int i,n_62;
	int factorial_62=1;
	printf("Enter a Number to get factorial: ");
	scanf("%d", &n_62);
	for(i=1; i<=n_62; i++)
	{
		factorial_62=factorial_62*i;
	}
	printf("Factorial of %d : %d\n",n_62,factorial_62);
	return 0;
}
