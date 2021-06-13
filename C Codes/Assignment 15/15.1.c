#include <stdio.h>

void main()
{
    int row,column,i,j;
    printf("No of rows: ");
    scanf("%d",&row);
    printf("No of columns: ");
    scanf("%d",&column);

    int arr1[row][column],arr2[row][column],arr3[row][column];

    printf("Enter elements of Matrix 1 :\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("Element %d %d:",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }printf("\n");

    printf("Enter elements of Matrix 2 :\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("Element %d %d:",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }printf("\n");

    printf("Matrix 1: \n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d ",arr1[i][j]);
        }printf("\n");
    }printf("\n");

    printf("Matrix 2: \n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d ",arr2[i][j]);
        }printf("\n");
    }printf("\n");

    printf("Matrix 3: \n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d ",arr3[i][j]);
        }printf("\n");
    }
}
