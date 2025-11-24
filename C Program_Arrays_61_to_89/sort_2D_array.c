#include <stdio.h>
int main(){
    int arr[3][3], i,j,k,temp;
    printf("Enter 9 elements for 3x3 array:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++) scanf("%d",&arr[i][j]);
    for(i=0;i<3;i++)
        for(j=0;j<2;j++)
            for(k=0;k<2-j;k++)
                if(arr[i][k]>arr[i][k+1]){
                    temp=arr[i][k]; arr[i][k]=arr[i][k+1]; arr[i][k+1]=temp;
                }
    printf("2D array sorted across rows:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++) printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}
