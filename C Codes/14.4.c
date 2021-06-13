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
    ++length;
  }
  s1[length]=' ';
  length++;
  for (j = 0; s2[j] != '\0'; ++j, ++length)
  {
    s1[length] = s2[j];
  }
  s1[length] = '\0';

  printf("After concatenation: %s",s1);
  return 0;
}
