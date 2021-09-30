#include<stdio.h>
int fib(int a);
void main()
{
	int c,i=0,n;
	printf("enter the number\n");
	scanf("%d",&c);
	for(n=1; n<=c; n++)
	{
		printf("%d ",fib(i));
		i++;
	}
}
int fib(int a)
{

	if(a==0||a==1)
		return a;
	else
	{
		return (fib(a-1)+fib(a-2));
	}
}
