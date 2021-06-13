#include<stdio.h>

int main()
{
	int eng, bio, physics,math,c;
	float avg;
	printf("enter your marks in eng: ");
	scanf("%d",&eng);
	printf("enter your marks in bio: ");
	scanf("%d",&bio);
	printf("enter your marks in physics: ");
	scanf("%d",&physics);
	printf("enter your marks in math: ");
	scanf("%d",&math);
	printf("enter your marks in c: ");
	scanf("%d",&c);
	avg=(eng+bio+physics+math+c)/5.0;
	printf("Average mark is: %.2f",avg);

	return 0;
}

