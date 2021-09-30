#include<stdio.h>
int main()
{
	float a,b,c;
	char ch;
	printf("Enter first number: ");
	scanf("%f", &a);
	printf("Enter Arithmetic operators : ('+', '-', 'x', '/' only): \n");
	getchar();
	scanf(" %c",&ch);
	printf("Enter second number: ");
	scanf("%f", &b);
	switch (ch)	{
		case '+':
			printf("%.2f + %.2f = %.2f",a,b,a+b);
			break;
		case '-':
			printf("%.2f - %.2f = %.2f",a,b,a-b);
			break;
		case '*':
			printf("%.2f x %.2f = %.2f",a,b,a*b);
			break;
		case '/':
			printf("%.2f / %.2f = %.2f",a,b,a/b);
			break;
		default:
			printf("Enter valid operation as mention above only.");
			break;
	}
	return 0;
}
