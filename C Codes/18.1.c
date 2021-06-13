#include<stdio.h>

int fib(int a)
{
	if(a>0)
		return a+fib(a-1);
	else
		return 0;
}

void main()
{
	int c,sum;
	printf("enter the number\n");
	scanf("%d",&c);
	sum=fib(c);
	printf("the sum is %d\n",sum);
}
