#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter first number: ");
	scanf("%d", &n1);
	printf("Enter second number: ");
	scanf("%d", &n2);

	int c;
	c= n1==n2;

	printf("%d", c);

	return 0;
}
