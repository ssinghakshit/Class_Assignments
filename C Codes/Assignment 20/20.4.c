#include <stdio.h>

void arraySort(int *arr, int *n)
{
	int temp,j,i = 1;
	arr++;
	while(i<*n)
	{
		j=1;
		temp = *arr;
		while(temp<*(arr-j) && (i-j)>=0)
		{
			int k = *(arr-j);
			*(arr-j+1) = k;
			j++;
		}
		*(arr-j+1) = temp;
		i++;
		arr++;
	}
}

int main()
{
	int i,n;
	printf("Enter number of elements in array: ");
	scanf("%d",&n);

	int arr[n];
	printf("Enter %d elements: ",n);
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	arraySort(&arr[0], &n);

	for(i=0 ; i<n ; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
