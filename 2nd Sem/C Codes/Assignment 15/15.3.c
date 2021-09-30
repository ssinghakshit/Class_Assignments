#include <stdio.h>

void main()
{
    int m, n, p, q, i, j, k, sum = 0; 
    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);

    int arr1[m][n];
    printf("Enter elements of first matrix: \n"); 
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            printf("arr1[%d][%d]: ",i,j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Matrix 1: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Enter number of rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);

    int arr2[p][q];
    printf("Enter elements of second matrix: \n"); 
    for (i = 0; i < p; i++){
        for (j = 0; j < q; j++){
            printf("arr2[%d][%d]: ",i,j);
            scanf("%d", &arr2[i][j]); 
        }
    }

    printf("Matrix 2: \n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    if(m!=p || n!=q){
        printf("The Matrices are of different orders and hence are not equal.\n");
    }
    else{
        int check=1;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(arr1[i][j]!=arr2[i][j]){
                    check=0;
                    break;
                }
            }
        }
        if(check){
            printf("The matrices are equal.");
        }
        else{
            printf("The matrices are not equal.");
        }
    }
}
