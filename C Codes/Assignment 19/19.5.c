#include<stdio.h>
#include <string.h>

int isPalindrome(char* string)
{
	int i= 0;
	int len = strlen(string);
	while(i<= (len+1)/2)
	{
		if(string[i] == string[len-i-1])
		{
			i++;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	char s[100];
	printf("Enter a string to check it is palindrom or not: ");
	gets(s);
	if(isPalindrome(s))
	{
		printf("%s is palindrome",s);
	}
	else
	{
		printf("%s is not palindrome",s);
	}

	return 0;
}
