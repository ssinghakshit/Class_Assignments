#include<stdio.h>

int main()
{

	int n_62,n1_62=0,n2_62=1,n3_62,n4_62,i_62;
	printf("Enter the number of terms for Fibonacci Series: ");
	scanf("%d", &n_62);


	for (i_62 = 0; i_62 < n_62; i_62++)
	{
		printf("%d\n", n1_62);
		n3_62=n1_62+n2_62;
		n2_62=n1_62;
		n1_62=n3_62;
	}

	return 0;

}
