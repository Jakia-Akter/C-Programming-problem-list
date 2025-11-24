#include <stdio.h>
int main(){
    int arr[10], n=10, i,j,key;
    printf("Enter 10 elements:\n");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter element to remove: "); scanf("%d",&key);
    for(i=0;i<n;i++)
        if(arr[i]==key){
            for(j=i;j<n-1;j++) arr[j]=arr[j+1];
            n--; i--;
        }
    printf("Array after removal: ");
    for(i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
