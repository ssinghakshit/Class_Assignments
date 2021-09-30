#include<stdio.h>

void array(int a[],int n,int d)
{
	if(n>d)
	{
		printf("%d ",a[d]);
		array(a,n,d+1);
	}
}

void main()
{
	int i,n;
	printf("enter the array size: ");
	scanf("%d",&n);
	int a[n];
	printf("enter %d array numbers: ",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}

	printf("the given array is: ");
	array(a,n,0);
}

