#include <stdio.h>
int main()
{
	int n_62, i_62, s_62= 0;
	printf("Enter a number: ");
	scanf("%d", &n_62);
	i_62 = 1;

	while (i_62 <= n_62)
	{
		s_62 += i_62;
		++i_62;
	}

	printf("Sum : %d",s_62);
	return 0;
}
