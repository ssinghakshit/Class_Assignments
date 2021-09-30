#include<stdio.h>
void main()
{
	int a,f,l;
	printf("Enter the 3 digit number: ");
	scanf("%d",&a);
	f=a/100;
	l=a%10;
	printf("The first and last digits are %d and %d respectively",f,l);
}
