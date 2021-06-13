#include<stdio.h>
void swap(int *x,int *y);
int main()
{
	int n,i,a,b;
	printf("Enter two numbers a,b respectively:\n");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("a=%d\nb=%d",*x,*y);
}
