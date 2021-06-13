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
			if(i%2!=0)
			{
				printf("%d ",j);
			}
			else
			{
				printf("%d ",i-j+1);
			}

		}
		printf(" \n");
	}
	return 0;
}
