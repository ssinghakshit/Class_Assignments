#include<stdio.h>
int main()
{
	int n,sum,sum1=0,i,j;
	printf("Enter value for n = ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
		{
			sum=0;
			for(j=1; j<=i; j++)
				{
					sum=sum+j;
				}
			sum1=sum1+sum;
		}

	printf("The Sum of Series up to Value %d is = %d\n",n,sum1);

	return 0;
}
