#include<stdio.h>
int power(int c,int d)
{
	if(d!=0)
		return (c*power(c,d-1));
	else
		return 1;
}
void main()
{
	int a,b;
	printf("enter the coefficient and power number ");
	scanf("%d%d",&a,&b);
	printf("the power value of %d^%d is %d\n",a,b,power(a,b));
}
