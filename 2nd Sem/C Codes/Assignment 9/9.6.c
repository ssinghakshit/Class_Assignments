#include<stdio.h>
int main()
{
	int num,i=1,sum=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	while(i<num)
	{
		if (num%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(sum==num)
	{
		printf("%d is a perfect number",num);
	}
	else
	{
		printf("%d is not a perfect number",num);
	}
}
