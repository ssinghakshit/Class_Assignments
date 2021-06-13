#include<stdio.h>
#include<math.h>
void result();
int main()
{
	int x,n;
	printf("enter value of x and no. of terms : ");
	scanf("%d%d",&x,&n);
	result(x,n);
	return 0;
}
void result(int x, int n)
{
	int i=1,check=1;
	float sol=0.00;
	while(n--)
	{
		int fact=1;
		int a;
		for(a=1; a<=i; a++)
			fact = fact * a;
		if(check%2!=0)
			sol = sol + (pow(x,i)/fact);
		else
			sol = sol - (pow(x,i)/fact);
		check++;
		i=i+2;
	}
	printf("the value of sin series is : %f",sol);
}
