#include<stdio.h>

int main()
{
	float a,b;
	char operation;
	printf("Enter two number: ");
	scanf("%f%f",&a,&b);
	printf("Enter any of the operation mention below: \n + \n -\n x \n /\nPlease choose one operation from above: \n");
	scanf(" %c",&operation);
	if(operation=='+')
	{
		printf("%.2f + %.2f = %.2f",a,b,a+b);
	}
	else if(operation=='-')
	{
		printf("%.2f - %.2f = %.2f",a,b,a-b);
	}
	else if(operation=='*')
	{
		printf("%.2f * %.2f = %.2f",a,b,a*b);
	}
	else if(operation=='/')
	{
		printf("%.2f / %.2f = %.2f",a,b,a/b);
	}
	else
	{
		printf("Enter valid operation.");
	}
	return 0;
}
