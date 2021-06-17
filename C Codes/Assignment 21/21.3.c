#include<stdio.h>
struct book
{
	char title[100];
	char author[100];
	char publication[100];
	int price;
};
int main()
{
	int n;
	printf("How many book's data you want to store?\nAns: ");
	scanf("%d",&n);
	struct book b[n];
	int i;
	for(i=1; i<=n; i++)
	{
		printf("enter the title of book%d: ",i);
		scanf("%s",&b[i].title);
		printf("enter the author of book%d: ",i);
		scanf("%s",&b[i].author);
		printf("enter the publication of book%d: ",i);
		scanf("%s",&b[i].publication);
		printf("enter the price of book%d: ",i);
		scanf("%d",&b[i].price);
		printf("\n");
	}
	for(i=1; i<=n; i++)
	{
		printf("title of book%d: %s\n",i,b[i].title);
		printf("author of book%d: %s\n",i,b[i].author);
		printf("publication of book%d: %s\n",i,b[i].publication);
		printf("price of book%d: %d\n",i,b[i].price);
		printf("\n");
	}
	char aut[100];
	printf("which author's book detail do you want to know?\nAns: ");
	scanf("%s",aut);
	int x;
	for(i=1; i<=n; i++)
	{
		x = strcmp(aut,b[i].author);
		if(x==0)
		{
			printf("title of book%d: %s\n",i,b[i].title);
			printf("author of book%d: %s\n",i,b[i].author);
			printf("publication of book%d: %s\n",i,b[i].publication);
			printf("price of book%d: %d\n",i,b[i].price);
		}
	}
	return 0;
}
