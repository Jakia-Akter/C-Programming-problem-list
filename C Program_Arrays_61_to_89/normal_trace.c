#include <stdio.h>
#include <math.h>
int main(){
    int mat[2][2], trace=0;
    double norm=0;
    printf("Enter 4 elements of 2x2 matrix:\n");
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++){
            scanf("%d",&mat[i][j]);
            norm += mat[i][j]*mat[i][j];
            if(i==j) trace += mat[i][j];
        }
    norm = sqrt(norm);
    printf("Trace = %d, Norm = %.2f\n", trace, norm);
    return 0;
}
