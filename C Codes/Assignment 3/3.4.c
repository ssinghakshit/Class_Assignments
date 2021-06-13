#include<stdio.h>

int main()
{
	int t;
	printf("Enter time in second:\n");
	scanf("%d", &t);
	int m=t/60;
	int s=t%60;
	printf("%d sec is %d minute %d second\n",t,m,s);
	return 0;
}

