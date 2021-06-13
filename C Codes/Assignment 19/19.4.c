#include <stdio.h>

void lcm(int *n1,int *n2)
{
	int max;
	max = (*n1 > *n2) ? *n1 : *n2;
	while (1)
	{
		if (max % *n1 == 0 && max % *n2 == 0)
		{
			printf("The LCM of %d and %d is %d.", *n1, *n2, max);
			break;
		}
		max++;
	}
}

void main()
{
	int n1, n2, max;
	printf("Enter first number: ");
	scanf("%d", &n1);
	printf("Enter second number: ");
	scanf("%d", &n2);
	lcm(&n1,&n2);
}


