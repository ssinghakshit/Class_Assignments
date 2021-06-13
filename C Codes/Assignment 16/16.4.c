#include<stdio.h>
int factorial(int a)
{
	int fact=1;
	int i=1;
	while(i<=a)
	{
		fact=fact*i;
		i++;
	}
	return fact;

}

int main()
{
	int n;
	printf("enter your number \n");
	scanf("%d",&n);
	int total=factorial(n);
	printf("factotial of this number is %d \n",total);
	return 0;
}
