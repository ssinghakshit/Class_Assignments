#include<stdio.h>
int fact(int *n)
{
	int k = *n;
	int fact = 1;
	while (k>0)
	{
		fact = fact * k;
		k--;
	}
	return fact;

}
int main()
{
	int n;
	printf("Enter a number to get factorial: ");
	scanf("%d",&n);
	int factorial=fact(&n);
	printf("Factorial of %d is : %d",n,factorial);
	return 0;
}


