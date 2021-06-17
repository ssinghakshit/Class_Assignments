#include<stdio.h>
struct complex
{
	int real;
	int imaginary;
} complex1,complex2;
int main()
{
	int x,y,sum1,sum2;
	printf(" please enter real part of first complex number : ");
	scanf("%d",&complex1.real);
	printf(" please enter imaginary part of first complex number: ");
	scanf("%d",&complex1.imaginary);
	printf("\n please enter real part of second complex number: ");
	scanf("%d",&complex2.real);
	printf(" please enter imaginary part of second complex number: ");
	scanf("%d",&complex2.imaginary);
	sum1 = complex1.real + complex2.real;
	sum2= complex1.imaginary + complex2.imaginary;
	printf("\n (%d+%di) + (%d+%di) = %d+%di \n", complex1.real, complex1.imaginary, complex2.real, complex2.imaginary, sum1, sum2);
	return 0;
}
