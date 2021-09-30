#include <stdio.h>

int main()
{
	float c,f;
	printf("Input value in Celcius: ");
	scanf("%f",&c);
	f= ((9*c)/5)+32;
	printf("%.2f in Fahrenheit: %.2f\n",c,f);

	printf("Input value in Fahrenheit: ");
	scanf("%f",&f);
	c=((f-32)/9)*5;
	printf("%.2f in Celsius: %.2f\n",f,c);

	return 0;
}
