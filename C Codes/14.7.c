#include<stdio.h>
#include<conio.h>
main()
{
  char ch[100];
  int i=0;
  printf("Enter any string:");
  gets(ch);
  printf("\n%c ",ch[0]);
  while(ch[i]!='\0')
  {
    if(ch[i]==' ')
    {
      i++;
      printf("%c ",ch[i]);
    }
      i++;
  }
}
