#include<stdio.h>
#include<math.h>

void main()
{
	int num_29,i_29,rem_29,n_29=0;
	int result_29=0;
	printf("Enter an integer: ");
	scanf("%d",&num_29);
	for(i_29=num_29; i_29!=0; ++n_29)
	{
		i_29/=10;
	}
	for(i_29=num_29; i_29!=0; i_29/=10)
	{
		rem_29=i_29%10;
		result_29+=pow(rem_29,n_29);
	}
	if(result_29==num_29)
	{
		printf("%d is an Armstrong number.",num_29);
	}
	else
	{
		printf("%d is not an Armstrong number.", num_29);
	}
}
