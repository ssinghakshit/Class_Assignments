#include<stdio.h>

int main()
{
	int a_62, t1_62,t2_62, sum_62=0;
	printf("Enter a number to get its sum of the digit: ");
	scanf("%d",&a_62);
	t1_62=a_62;
	while(t1_62!=0)
	{
		t2_62=t1_62%10;
		sum_62+=t2_62;
		t1_62=t1_62/10;
	}
	printf("Sum : %d",sum_62);
	return 0;
}
