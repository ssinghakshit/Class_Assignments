#include <stdio.h>
int main()
{
  char s[100];
  int i=0,j,l=0;
  printf("Enter the string:");
  scanf("%s",s);
  while (s[i] != '\0')
  {
    i++;
  }
  for(j=0;j<i/2;j++)
  {
      if(s[j]==s[i-j-1])
      l++;
  }
  if(l==j)
      {
          printf("%s is a palindrome string.",s);
      }
  else
  printf("%s is not palindrome.",s);
  return 0;
}
