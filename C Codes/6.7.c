#include <stdio.h>
int main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		printf("Entered character %c is Letter",ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("Enteres character %c is number",ch);
	}
	else
	{
		printf("Entered character %c is special symbol",ch);
	}
	return 0;
}
