#include<stdio.h>
int binary(int c);
void main()
{
	int a;
	printf("enter the number in decimal ");
	scanf("%d",&a);
	printf("binary number of %d is %d\n",a,binary(a));
}
int binary(int c)
{
	if(c!=0)
		return (c%2+10*binary(c/2));
	else
		return 0;
}
