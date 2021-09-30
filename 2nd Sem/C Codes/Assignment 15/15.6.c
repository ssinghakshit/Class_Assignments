#include <stdio.h>

void main()
{
    int m, n, i, j, k, sum = 0; 
    printf("Enter number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);

    int arr[m][n],lt[m][n],ut[m][n];
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

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i<j){
                lt[i][j]=0;
            }
            else{
                lt[i][j]=arr[i][j];
            }
        }
    }
    printf("\nLower triangle of the given matrix: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",lt[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i>j){
                ut[i][j]=0;
            }
            else{
                ut[i][j]=arr[i][j];
            }
        }
    }
    printf("\nUpper triangle of the given matrix: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",ut[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
