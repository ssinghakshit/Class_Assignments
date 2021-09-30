#include <stdio.h>

void main()
{
    int m, n, p, q, i, j, k, sum = 0; 
    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);

    int first[m][n];
    printf("Enter elements of first matrix: \n"); 
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            printf("first[%d][%d]: ",i,j);
            scanf("%d", &first[i][j]);
        }
    }

    printf("Matrix 1: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Enter number of rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);

    if (n != p){
        printf("The multiplication isn't possible.\n");
    }

    else{
        int second[p][q], multiply[m][q];
        printf("Enter elements of second matrix: \n"); 
        for (i = 0; i < p; i++){
            for (j = 0; j < q; j++){
                printf("second[%d][%d]: ",i,j);
                scanf("%d", &second[i][j]); 
            }
        }

        printf("Matrix 2: \n");
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                printf("%d ",second[i][j]);
            }
            printf("\n");
        }
        printf("\n");

        for (i = 0; i < m; i++){
            for (j = 0; j < q; j++){
                for (k = 0; k < p; k++){
                    sum = sum + first[i][k]*second[k][j];
                } 
                multiply[i][j] = sum;
                sum = 0;
            }
        }

        printf("Product of the matrices:\n"); 
        for (i = 0; i < m; i++){
            for (j = 0; j < q; j++){
                printf("%d\t", multiply[i][j]); 
            }
            printf("\n");
        }
    }
}
