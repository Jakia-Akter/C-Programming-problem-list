#include <stdio.h>
int main(){
    int mat[3][3], i,j, sum1=0,sum2=0;
    printf("Enter 9 elements of 3x3 matrix:\n");
    for(i=0;i<3;i++) for(j=0;j<3;j++) scanf("%d",&mat[i][j]);
    for(i=0;i<3;i++){
        sum1 += mat[i][i];
        sum2 += mat[i][2-i];
    }
    printf("Sum of diagonals: Primary = %d, Secondary = %d\n", sum1,sum2);
    return 0;
}
