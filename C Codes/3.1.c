#include<stdio.h>

int main(void)
{
	int a,b,sum,sub,multi;
	float div;
	printf("Enter 2 numbers\n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	sub=a-b;
	div=(float)a/b ;
	multi=a*b;
	printf("summation = %d\n",sum);
	printf("substraction = %d\n",sub);
	printf("Division = %.2f\n",div);
	printf("multiplication = %d\n",multi);
	return 0;
}
