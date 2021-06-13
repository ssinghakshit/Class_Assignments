#include <stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the 1st number: ");
	scanf("%d",&a);
	printf("Enter the 2nd number: ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("The first number = %d ",a);
	printf("\nThe second number= %d",b);
}
