#include<stdio.h>

int summ(int *a, int *b)
{
	return *a+*b;
}

int main()
{
	int a,b;
	printf("Enter two number to add them:\n");
	scanf("%d%d",&a,&b);
	int sum2=summ(&a,&b);
	printf("%d + %d = %d",a,b,sum2);
	return 0;
}

