#include<stdio.h>
int main()
{
    int a62,b62;
    int op62;
    
    printf("Enter the values of a & b: ");
    scanf("%d %d",&a62,&b62);
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter your Choice : ");
    scanf("%d",&op62);
    switch(op62)
    {
    case 1  :
        printf("%d + %d = %d",a62,b62,a62+b62);
        break;
    case 2  :
        printf("%d - %d = %d",a62,b62,a62-b62);
        break;
    case 3  :
        printf("%d * %d = %d",a62,b62,a62*b62);
        break;
    case 4  :
        printf("%d / %d = %.2f",a62,b62,(float)a62/(float)b62);
        break;
    default  :
        printf("Invalid operation!");
        break;
    }
    return 0;
}
