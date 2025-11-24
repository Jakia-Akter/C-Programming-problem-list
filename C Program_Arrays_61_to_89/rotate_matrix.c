#include <stdio.h>
int main(){
    int mat[3][3], i,j,temp;
    printf("Enter 9 elements of 3x3 matrix:\n");
    for(i=0;i<3;i++) for(j=0;j<3;j++) scanf("%d",&mat[i][j]);
    temp = mat[0][0];
    mat[0][0]=mat[1][0];
    mat[1][0]=mat[2][0];
    mat[2][0]=mat[2][1];
    mat[2][1]=mat[2][2];
    mat[2][2]=mat[1][2];
    mat[1][2]=mat[0][2];
    mat[0][2]=mat[0][1];
    mat[0][1]=temp;
    printf("Matrix after rotating boundary elements:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++) printf("%d ",mat[i][j]);
        printf("\n");
    }
    return 0;
}
