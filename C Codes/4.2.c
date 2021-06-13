#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter two numbers to swap: ");
	scanf("%d %d",&a, &b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After swap:\na = %d\nb = %d",a,b);
	return 0;
}
