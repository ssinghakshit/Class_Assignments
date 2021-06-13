#include <stdio.h>

float summ(float *a, float *b)
{
	return *a+*b;
}

int main()
{
	float a,b;
	printf("Enter 1st number: ");
	scanf("%f",&a);
	printf("Enter 2nd number: ");
	scanf("%f",&b);

	float sum = summ(&a,&b);
	printf("%.2f + %.2f = %.2f\n",a,b,sum);

	return 0;
}
