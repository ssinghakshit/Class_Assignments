#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10],s2[20];
    printf("Enter 2 strings: ");
    scanf("%s %s",&s1,&s2);
    strcat(s2,s1);
    printf("Concatenated string: %s %s\n",s1,s2);
    strncat(s1,s2,2);
    printf("Append the string: %s%s\n",s1,s2);
    printf("Length the string: %d %d\n",strlen(s1),strlen(s2));
    printf("Comparision of string: %d\n",strcmp(s1,s2));
    strcpy(s1,s2);
    printf("Using copy function: %s %s \n",s1,s2);
    return 0;
}
