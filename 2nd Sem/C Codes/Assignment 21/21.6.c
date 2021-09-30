#include<stdio.h>
struct Time
{
	int hrs;
	int min,sec;
};
void diffrencetime(struct Time t1,struct Time t2,struct Time *diff)
{
	if(t2.sec<t1.sec)
	{
		t2.sec+=60;
		t2.min--;
	}
	diff->sec = t2.sec - t1.sec;
	if(t2.min<t1.min)
	{
		t2.min+=60;
		t2.hrs--;
	}
	diff->min = t2.min - t1.min;
	diff->hrs = t2.hrs - t1.hrs;
}
int main()
{
	struct Time start,end,diff;
	printf("enter start time as (hrs min sec ) : ");
	scanf("%d%d%d",&start.hrs,&start.min,&start.sec);
	printf("enter end time as (hrs min sec ) : ");
	scanf("%d%d%d",&end.hrs,&end.min,&end.sec);
	diffrencetime(start,end,&diff);
	printf("%dhrs %dmin %dsec - %dhrs %dmin %dsec = %dhrs %dmin %dsec",end.hrs,end.min,end.sec,start.hrs,start.min,start. sec,diff.hrs,diff.min,diff.sec);
	return 0;
}
