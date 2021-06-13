#include <stdio.h>
#include <math.h>

int main()
{
	double b, p, res;

	printf("Enter the base number: ");
	scanf("%lf", &b);

	printf("Enter the power raised: ");
	scanf("%lf",&p);
	if(p>0)
	{
		res = pow(b,p);

		printf("Y = %.1lf",res);
	}
	else
	{
		printf("Enter positive power.");
	}

	return 0;
}
