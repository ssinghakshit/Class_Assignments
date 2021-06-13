#include <math.h>
#include <stdio.h>
int main()
{
	double a, b, c, d, r1, r2;
	printf("Enter coefficients a, b and c: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	d = b * b - 4 * a * c;
	if (d > 0)
	{
		r1 = (-b + sqrt(d)) / (2 * a);
		r2 = (-b - sqrt(d)) / (2 * a);
		printf("Root1 = %.2lf and Root2 = %.2lf", r1, r2);
	}
	else if (d == 0)
	{
		r1 = r2 = -b / (2 * a);
		printf("Root1 = Root2 = %.2lf;", r1);
	}
	else
		printf("Roots are Imaginary");

	return 0;
}
