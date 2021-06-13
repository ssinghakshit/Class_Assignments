#include<stdio.h>
#include<string.h>
void main()
{	char a[100];
	int l=0;
	printf("enter the string\n");
	scanf("%s",&a);
	printf("string is: %s\n",a);
    int i=0;
	while(a[i]!='\0')
    {
        l++;
        i++;
    }
	printf("length of the string is %d \n",l);
}
