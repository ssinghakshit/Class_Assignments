#include <stdio.h>
void main()
{
	int num,temp,rev;
	printf("Enter the 3 digit number: ");
	scanf("%d",&num);
	temp = num%10;
	rev=temp*100;
	temp = num/10;
	temp = temp%10;
	rev=rev+temp*10;
	temp = num/10;
	temp = temp/10;
	rev=rev+temp;
	if(rev==num)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not palindrome");
	}
}
