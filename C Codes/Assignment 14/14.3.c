#include <stdio.h>
int main() {
    char s[100];
    int i,rem=0,j=0;
    printf("Enter the string: ");
    scanf("%s",s);

    for (i = 0; s[i] != '\0'; ++i)
    {
         if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
         rem=rem+1;

    }
    printf("The no. of vowel letter is %d ",rem);
    return 0;
}
