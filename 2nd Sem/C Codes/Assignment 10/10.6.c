#include <stdio.h>

int main()
{
	int row, i,j,k,p=0;
	printf("Enter number of rows: ");
	scanf(" %d",&row);
	for(i=1; i<=row; i++)
	{
		for(j=1; j<=i; j++)
		{
			if(j%2!=0 && i%2!=0)
			{
				printf("1 ");
			}
			else if(j%2==0 && i%2!=0)
			{
				printf("0 ");
			}
			else if(j%2==0 && i%2==0)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
		}
		printf(" \n");
	}
	return 0;
}
