#include<stdio.h>
struct employee
{
	char name[50],gender[10],designation[80],department[100];
	float basic_pay;
};
int main()
{
	int n;
	printf("enter the number of employee : ");
	scanf("%d",&n);
	struct employee e[n],*ptr;
	ptr = e;
	int i;
	for(i=0; i<n; i++)
	{
		printf("enter the below information of %d employee\n",i+1);
		getchar();
		printf("name : ");
		gets(e[i].name);
		printf("gender : ");
		gets(e[i].gender);
		printf("designation : ");
		gets(e[i].designation);
		printf("department : ");
		gets(e[i].department);
		printf("basic salary pay : ");
		scanf("%f",&e[i].basic_pay);
	}
	float hra , da;
	hra = 0.25 * ptr->basic_pay;
	da = 0.75 * ptr->basic_pay;
	ptr->basic_pay = e->basic_pay + hra+da;
	for(i=0; i<n; i++)
	{
		printf("information of %d employee is \n\n",i+1);
		printf("name : %s \n",e[i].name);
		printf("gender : %s\n",e[i].gender);
		printf("designation : %s\n",e[i].designation);
		printf("department : %s\n",e[i].department);
		printf("gross salary pay : %f\n",e[i].basic_pay);
		printf("\n");
	}
	return 0;
}
