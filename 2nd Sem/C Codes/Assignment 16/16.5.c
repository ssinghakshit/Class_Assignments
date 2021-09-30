#include<stdio.h>
int natural_number(int a)
{

	int i=1;
	while(i<=a)
	{
		printf("%d \n",i);
		i++;
	}
	return 0;
}

int main()
{
	int n;
	printf("enter your number \n");
	scanf("%d",&n);
	printf(" generating natural number\n");
	int series=natural_number(n);

	return 0;
}
