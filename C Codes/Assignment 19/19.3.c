#include <stdio.h>
void arm(int *num)
{
	int originalNum,remainder,result = 0;
	originalNum = *num;

	while (originalNum != 0)
	{
		remainder = originalNum % 10;

		result += remainder * remainder * remainder;
		originalNum /= 10;
	}

	if (result == *num)
		printf("%d is an Armstrong number.", *num);
	else
		printf("%d is not an Armstrong number.", *num);
}

int main()
{
	int num, originalNum, remainder, result = 0;
	printf("Enter integer to know it is armostrong or not: ");
	scanf("%d", &num);

	arm(&num);

	return 0;
}
