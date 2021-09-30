#include <stdio.h>
void main() {
    int n;
    printf("Enter no. of elements N: ");
    scanf("%d",&n);
    int arr[n];
    int i,j;
    printf("Enter array element:");
    for(i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    printf("The reversed array: ");
    for(i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }
}
