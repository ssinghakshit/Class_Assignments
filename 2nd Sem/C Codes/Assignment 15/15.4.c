#include <stdio.h>

void main()
{
    int m, n, i, j, k, sum = 0; 
    printf("Enter number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    if(m!=n){
        printf("Please enter a square matrix.");
    }
    else{
        int arr[m][n];
        printf("Enter elements of the matrix: \n"); 
        for (i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                printf("arr[%d][%d]: ",i,j);
                scanf("%d", &arr[i][j]);
            }
        }

        printf("Matrix: \n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");

        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(i==j){
                    sum+=arr[i][j];
                }
            }
        }
        printf("The sum of the diagonal elements of the given matrix is: %d",sum);
    }

}
