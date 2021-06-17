#include<stdio.h>
struct Time
{
	int hrs;
	int min,sec;
};
struct Time adding_time(struct Time a,struct Time b)
{
	struct Time sum;
	sum.sec = a.sec + b.sec;
	sum.min = a.min + b.min;
	sum.hrs = a.hrs + b.hrs;
	if(sum.sec>60)
	{
		sum.min++;
		sum.sec-=60;
	}
	if(sum.min>60)
	{
		sum.hrs++;
		sum.min-=60;
	}
	printf("sum of time is (hrs min sec ): %dhrs %dmin %dsec",sum.hrs,sum.min,sum.sec);
}
int main()
{
	struct Time t1,t2;
	printf("enter 1st time as (hrs min sec ) : ");
	scanf("%d%d%d",&t1.hrs,&t1.min,&t1.sec);
	printf("enter 2nd time as (hrs min sec ) : ");
	scanf("%d%d%d",&t2.hrs,&t2.min,&t2.sec);
	adding_time(t1,t2);
	return 0;
}
