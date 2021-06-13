#include<stdio.h>
void main()
{
	int n,original,rem,reverse=0;
	printf("Enter the Number: ");
	scanf("%d",&n);
	original=n;
	for(; n!=0;)
	{
		rem=n%10;
		reverse=reverse*10+rem;
		n=n/10;
	}
	if(reverse==original)
	{
		printf("It is palindrome");
	}
	else
	{
		printf("It is not palindrome");
	}
}
