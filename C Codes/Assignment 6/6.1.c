#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter your first number:");
	scanf("%d",&a);
	printf("Enter your second number:");
	scanf("%d",&b);
	if (a>b)
	{
		printf("The greater number is: %d",a);
	}
	else
	{
		printf("The greater number is: %d",b);
	}
	return 0;
}
