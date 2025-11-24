#include <stdio.h>
int main(){
    int mat[3][3], i,j;
    printf("Enter 9 elements of 3x3 matrix:\n");
    for(i=0;i<3;i++) for(j=0;j<3;j++) scanf("%d",&mat[i][j]);
    printf("Boundary elements: ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            if(i==0 || i==2 || j==0 || j==2) printf("%d ",mat[i][j]);
    printf("\n");
    return 0;
}
