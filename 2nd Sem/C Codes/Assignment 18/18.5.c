#include<stdio.h>
int fact(int);
void main()
{
	int a;
	printf("enter the number: ");
	scanf("%d",&a);
	printf("factorial of %d is %d",a,fact(a));
}
int fact(int n1)
{
	if(n1>1)
		return n1*fact(n1-1);
	else
		return 1;
}
