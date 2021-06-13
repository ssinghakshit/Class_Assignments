#include<stdio.h>

int sumArray(int arr[],int y)
{
	int i;
	int sum=0;
	for(i=0; i<y; i++)
	{
		sum+= arr[i];
	}
	return sum;
}
int main()
{
	int n,i;
	printf("Enter size of array: ");
	scanf("%d", &n);

	int arr[n];
	printf("Enter data of array: \n");
	for(i=0; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Sum of elements of array  is : ");
	int sum=sumArray(arr,n);
	printf("%d",sum);
	return 0;
}
