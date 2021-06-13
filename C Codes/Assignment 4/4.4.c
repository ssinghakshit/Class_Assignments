#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter 2 numbers: ");
	scanf("%d %d",&a,&b);
	printf("Smallest number is %d",(a<b)?a:b);
	return 0;
}
