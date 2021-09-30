#include<stdio.h>

void sort(int *x,int y)
{
	int i,j,temp;
	for(i=0; i<y-1; i++)
	{
		for(j=0; j<y-i-1; j++)
		{
			if(x[j]>x[j+1])
			{
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}
	}
	for(i=0; i<y; i++)
		printf("%d ",x[i]);
}

int main()
{
	int n,i;
	printf("Number of elements:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter Number:\n");
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);
	sort(arr,n);
}
