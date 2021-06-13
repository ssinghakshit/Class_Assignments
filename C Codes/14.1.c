#include<stdio.h>
int main()
{
    char string[100];
    printf("Enter string : ");
    gets(string);
    int count=0,i=0;
    while(string[i]!='\0')
    {
        count++;
        i++;
    }
    printf("Lenght of %s is : %d",string,count);
    return 0;
}
