#include <stdio.h>

int main()
{
	int row,i,j,k;
	printf("Enter number of rows: ");
	scanf(" %d",&row);
	for(i=1; i<=row; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%c ",'A'+i-j);
		}
		printf("\n");
	}
	return 0;
}
