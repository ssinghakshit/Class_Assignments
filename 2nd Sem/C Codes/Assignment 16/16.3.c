#include<stdio.h>
int  character(char ch)
{
	if(ch>=65 && ch<=96)
	{
		ch=ch+32;
	}
	else
	{
		ch=ch-32;
	}
	return ch;
}

int main()
{
	char a;
	printf("enter any character \n");
	scanf("%c",&a);
	char l=character(a);
	printf(" your entering character opposite character is %c \n",l);
	return 0;
}
