#include <stdio.h>

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int main()
{
	int x, y, hcf, lcm;

	printf("Enter two integers\n");
	scanf("%d %d", &x, &y);

	hcf = gcd(x, y);
	lcm = (x*y)/hcf;

	printf("Greatest common divisor of %ld and %d = %d\n", x, y, hcf);
	printf("Least common multiple of %ld and %d = %d\n", x, y, lcm);

	return 0;
}


