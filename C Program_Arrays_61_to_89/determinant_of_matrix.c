#include <stdio.h>
int main(){
    int mat[2][2], det;
    printf("Enter 4 elements of 2x2 matrix:\n");
    for(int i=0;i<2;i++) for(int j=0;j<2;j++) scanf("%d",&mat[i][j]);
    det = mat[0][0]*mat[1][1] - mat[0][1]*mat[1][0];
    printf("Determinant = %d\n",det);
    return 0;
}
