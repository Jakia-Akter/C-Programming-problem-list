#include <stdio.h>
int main(){
    int arr1[5], arr2[5], merged[10], i;
    printf("Enter 5 elements for first array:\n");
    for(i=0;i<5;i++) scanf("%d",&arr1[i]);
    printf("Enter 5 elements for second array:\n");
    for(i=0;i<5;i++) scanf("%d",&arr2[i]);
    for(i=0;i<5;i++) merged[i]=arr1[i];
    for(i=0;i<5;i++) merged[5+i]=arr2[i];
    printf("Merged array: ");
    for(i=0;i<10;i++) printf("%d ",merged[i]);
    printf("\n");
    return 0;
}
