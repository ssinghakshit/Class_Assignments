#include<stdio.h>

int main()
{ char a[100],b[100];
  int i,n=0,k=0;
    printf("enter your string: ");
    gets(a);
    i=0;
    while(a[i]!='\0')
    {
      n++;
     i++;
    }
    for(i=n-1;i>=0;i--)
    {
      b[k++]=a[i];
    }
    b[k]='\0';
    printf("reverse string is: ");
    puts(b);
    return 0;
    
}
