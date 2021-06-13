#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the First Integer: ");
	scanf("%d", &a);
	printf("Enter the Second Integer: ");
	scanf("%d", &b);
	printf("Enter the Third Integer: ");
	scanf("%d", &c);

	int ch;
	ch = (a<(b+c)) && (b<(a+c)) && (c<(a+b));

	int sum;
	sum = ch * (a+b+c);

	printf("The sum of the side of triangle is %d.", sum);

	return 0;
}
