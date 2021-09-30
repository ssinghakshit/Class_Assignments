#include <stdio.h>
int main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	{
		ch= ch-32;
		printf("Uppercase character is: %c",ch);
	}
	else if(ch>='A' && ch<='Z')
	{
		printf("Your character is already in Uppercase.");
	}
	else
	{
		printf("Inappropriate input\n");
	}
	return 0;
}
