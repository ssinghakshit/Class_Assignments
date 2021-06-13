#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter first number: ");
	scanf("%d", &n1);
	printf("Enter second number: ");
	scanf("%d", &n2);

	int sum;
	sum = n1-(-n2);

	printf("The sum entered Numbers is %d.", sum);

	return 0;
}
