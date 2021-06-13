#include <stdio.h>

int arraySum(int *arr, int *n)
{
	int i,sum=0;
	for(i=0 ; i<*n ; i++)
	{
		sum = sum + *arr;
		arr++;
	}
	return sum;
}

int main()
{
	int i,n;
	printf("Enter number of elements in array: ");
	scanf("%d",&n);

	int arr[n];
	for(i=0 ; i<n ; i++)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d",&arr[i]);
	}

	int sum = arraySum(&arr, &n);
	printf("Sum of all elements : %d",sum);
	return 0;
}
