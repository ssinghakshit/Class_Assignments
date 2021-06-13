#include <stdio.h>

void main()
{
	int number;
	int ones, tens, hundreds;
	printf("Enter a three-digit number: ");
	scanf("%d", &number);
	hundreds = number / 100;
	tens = (number - hundreds * 100) / 10;
	ones = (number - hundreds * 100 - tens * 10);
	printf("The reversal is: %d%d%d\n", ones, tens, hundreds);
}

