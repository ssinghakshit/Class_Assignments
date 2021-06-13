#include <stdio.h>
int main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'|| ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
		{
			printf("%c is a Vowel\n",ch);
		}
		else
		{
			printf("%c is a Consonant\n",ch);
		}
	}
	else
	{
		printf("Not a Charecter\n");
	}
	return 0;
}
