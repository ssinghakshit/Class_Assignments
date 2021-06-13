#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter marks in 4 subjects: ");
	scanf("%d%d%d%d", &a,&b,&c,&d);
	printf("Total marks : 400\n");
	int total =a+b+c+d;
	printf("Secured marks : %d\n",total);
	int  percent=total*100/400;
	printf("Percentage = %d %c\n",percent,'%');
	if(percent>90)	printf("Grade: O");
	else if(percent>80)	printf("Grade: E");
	else if(percent>70)	printf("Grade: A");
	else if(percent>60)	printf("Grade : B");
	else if(percent>50)	printf("Grade : C");
	else if(percent>40)	printf("Grade : D");
	else{
		printf("Grade: Fail");
		printf("\nWork hard");
	}
	return 0;
}
