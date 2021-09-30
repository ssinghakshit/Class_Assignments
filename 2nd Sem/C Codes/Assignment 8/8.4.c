#include<stdio.h>

int main()
{
	int a_62;
	int i_62 = 1;
	int j_62 =0;
	printf("Enter a number: ");
	scanf("%d", &a_62);
	while(i_62<=a_62)
	{
		j_62=(j_62*2) + 1;
		printf("%d\t",j_62);
		i_62 ++;
	}

	return 0;
}
