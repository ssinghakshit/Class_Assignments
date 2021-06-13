#include<stdio.h>

int main()
{
	int a_62;
	int b_62=1;
	printf("Enter a number: ");
	scanf("%d", &a_62);
	while(b_62<=a_62 )
	{
		printf("%d\t",b_62);
		b_62 ++;
	}
	return 0;
}
