#include<stdio.h>

struct employee
{
	char name[50];
	int id_number;
	int age;
	int salary;
};
void main()
{
	struct employee a;
	printf("Enter the name:");
	gets(a.name);
	printf("Enter the id_number:");
	scanf("%d",&a.id_number);
	printf("Enter age:");
	scanf("%d",&a.age);
	printf("Enter the salary:");
	scanf(" %d",&a.salary);
	
	printf("Name = %s\n",a.name);
	printf("Id number = %d\n",a.id_number);
	printf("Age = %d\n",a.age);
	printf("Salary = %d",a.salary);
}

