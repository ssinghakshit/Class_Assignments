#include<stdio.h>
int main()
{
	int n;
	printf("Enter an Integer: ");
	scanf("%d", &n);
	int a=n;
	n = n << 4;
	printf("\nAfter Shifting the 4 bits left: %d\n", n);

	a = a >> 4;
	printf("\nAfter Shifting the 4 bits right: %d\n", a);

	return 0;

}
