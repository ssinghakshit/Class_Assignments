#include <stdio.h>
void main()
{
	int n1, n2, i, gcd,lcm;
	printf("Enter two integers: ");
	scanf("%d %d", &n1, &n2);
	for(i=1; i <= n1 && i <= n2; ++i)
	{
		if(n1%i==0 && n2%i==0)
			gcd = i;
	}
	lcm = (n1 * n2) / gcd;
	printf("L.C.M of %d and %d is %d\n", n1, n2, lcm);
	printf("G.C.D of %d and %d is %d", n1, n2, gcd);

}
