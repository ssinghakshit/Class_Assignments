#include <stdio.h>
int fact(int n)
{
	int i, f = 1;
	for (i = 1; i <= n; i++)
	{
		f = f * i;
	}
	return f;
}

void main()
{
	printf("Here we are going to calculate nCr\nPlease enter requrie data here: \n");
	int n, r, ncr;

	printf("Enter a number n\n");
	scanf("%d", &n);
	printf("Enter a number r\n");
	scanf("%d", &r);
	ncr = fact(n) / (fact(r) * fact(n - r));
	printf("Value of nCr i.e., %dC%d = %d\n", n, r, ncr);
}


