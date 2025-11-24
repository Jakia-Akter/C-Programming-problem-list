#include <stdio.h>
int main(){
    int arr[5], n=5, d=2, i,j,temp;
    printf("Enter 5 elements: ");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    for(i=0;i<d;i++){
        temp=arr[0];
        for(j=0;j<n-1;j++) arr[j]=arr[j+1];
        arr[n-1]=temp;
    }
    printf("Array after rotation: ");
    for(i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
