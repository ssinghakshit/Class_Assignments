#include <stdio.h>
int main()
{
  char s1[100], s2[100];
  int length=0, j;
  printf("Enter the first string:");
  scanf("%s",s1);
  printf("Enter the second string:");
  scanf("%s",s2);
  while (s1[length] != '\0')
  {
    s2[length]=s1[length];
    length++;
  }
  s2[length]='\0';
  printf("After copy both strings: %s and %s",s1,s2);
  return 0;
}
