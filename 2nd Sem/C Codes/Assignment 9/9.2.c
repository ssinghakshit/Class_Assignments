#include<stdio.h>
int main()
{
	int a,rev=0,rem;
	printf("Enter the number: ");
	scanf("%d",&a);
	while(a!=0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a=a/10;
	}
	printf("Reversed number is: %d",rev);
}
