#include <stdio.h>
int main(){
    int mat[2][2], trans[2][2], i,j;
    printf("Enter 4 elements of matrix:\n");
    for(i=0;i<2;i++) for(j=0;j<2;j++) scanf("%d",&mat[i][j]);
    for(i=0;i<2;i++) for(j=0;j<2;j++) trans[j][i]=mat[i][j];
    printf("Transpose:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++) printf("%d ",trans[i][j]);
        printf("\n");
    }
    return 0;
}
