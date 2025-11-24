#include <stdio.h>
int main(){
    int mat[3][3], i,j,temp;
    printf("Enter 9 elements of 3x3 matrix:\n");
    for(i=0;i<3;i++) for(j=0;j<3;j++) scanf("%d",&mat[i][j]);
    for(j=0;j<3;j++){
        temp = mat[0][j];
        mat[0][j]=mat[2][j];
        mat[2][j]=temp;
    }
    printf("After interchanging first and last rows:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++) printf("%d ",mat[i][j]);
        printf("\n");
    }
    return 0;
}

