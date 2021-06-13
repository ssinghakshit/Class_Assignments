#include<stdio.h>

struct Student
{
	char name[50];
	int roll_no;
	int Class;
	int marks;
};
void main()
{
	struct Student a;
	printf("Enter the name of student: ");
	gets(a.name);
	printf("Enter the roll no: ");
	scanf("%d",&a.roll_no);
	printf("Enter student class: ");
	scanf("%d",&a.Class);
	printf("Enter the marks: ");
	scanf(" %d",&a.marks);

	printf("Name = %s\n",a.name);
	printf("Roll no = %d\n",a.roll_no);
	printf("Class = %d\n",a.Class);
	printf("Marks = %d",a.marks);
}

