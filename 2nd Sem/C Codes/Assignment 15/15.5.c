#include <stdio.h>

void main()
{
    int m, n, i, j, k, sum = 0; 
    printf("Enter number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    int arr[m][n];
    printf("Enter elements of the matrix: \n"); 
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            printf("arr[%d][%d]: ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMatrix: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i=0;i<m;i++){
        for (j=0;j<n;j++){
            sum+=arr[i][j];
        }
        printf("The sum of the elements row %d is: %d \n",(i+1),sum);
        sum=0;
    }
    printf("\n");

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            for(k=0;k<n;k++){
                if(k==i){
                    sum+=arr[j][k];
                }
            }
        }
        printf("The sum of the elements of column %d is: %d \n",(i+1),sum);
        sum=0;
    }
}
