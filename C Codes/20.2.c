#include <stdio.h>
#include <string.h>

int isVowel(char *ptr)
{
	if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u')
	{
		return 1;
	}
	return 0;
}

int main()
{
	char str[100];
	printf("Enter your string: ");
	gets(str);
	int n = strlen(str);

	int i,count = 0;
	for(i=0 ; i<n ; i++)
	{
		if(isVowel(&(str[i])))
		{
			count++;
		}
	}
	printf("total vowel = %d",count);
	return 0;
}
