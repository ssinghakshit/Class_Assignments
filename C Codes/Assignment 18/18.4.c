#include<stdio.h>
int GCD(int ,int);
void main()
{
	int a,b;
	printf("enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("GCD of %d and %d is %d",a,b,GCD(a,b));
}
int GCD(int n1,int n2)
{
	if(n2!=0)
		return GCD(n2,n2%n1);
	else
		return n1;
}
