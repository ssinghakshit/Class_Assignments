#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter marks in 4 subjects: ");
	scanf("%d%d%d%d", &a,&b,&c,&d);
	printf("Total marks : 400\n");
	int total =a+b+c+d;
	printf("Secured marks : %d\n",total);
	float percent=total*100/400.0;
	printf("Percentage = %.2f %c\n",percent,'%');
	int p=percent/10;
	switch (p)	{
		case 10:	{
			printf("Grade : O");
			break;	}
		case 9:	{
			printf("Grade : O");
			break;	}
		case 8:	{
			printf("Grade : E");
			break;	}
		case 7:	{
			printf("Grade: A");
			break;	}
		case 6:	{
			printf("Grade : B");
			break;	}
		case 5:	{
			printf("Grade : C");
			break;	}
		case 4:	{
			printf("Grade: D");
			break;	}
		default:
			printf("Grade : F\nWork Hard.");
	}
	return 0;
}
