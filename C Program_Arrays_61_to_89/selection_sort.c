#include <stdio.h>
int main(){
    int arr[5],i,j,min_idx,temp;
    printf("Enter 5 elements:\n");
    for(i=0;i<5;i++) scanf("%d",&arr[i]);
    for(i=0;i<4;i++){
        min_idx=i;
        for(j=i+1;j<5;j++)
            if(arr[j]<arr[min_idx]) min_idx=j;
        temp=arr[i]; arr[i]=arr[min_idx]; arr[min_idx]=temp;
    }
    printf("Sorted array: ");
    for(i=0;i<5;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
