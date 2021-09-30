#include <stdio.h>
int main() {
    char s[100];
    int i,rem=0;
    printf("Enter the string: ");
    scanf("%s",s);

    for (i = 0; s[i] != '\0'; ++i)
    {
        rem=rem+1;
    }
    printf("Reverse string is: ");
    for(rem=rem-1;rem>=0;rem--)
    {

        printf("%c",s[rem]);
    }
    return 0;
}
