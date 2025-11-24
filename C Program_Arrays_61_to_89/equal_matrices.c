#include <stdio.h>
int main(){
    int mat1[2][2], mat2[2][2], i,j, equal=1;
    printf("Enter 4 elements for first matrix:\n");
    for(i=0;i<2;i++) for(j=0;j<2;j++) scanf("%d",&mat1[i][j]);
    printf("Enter 4 elements for second matrix:\n");
    for(i=0;i<2;i++) for(j=0;j<2;j++) scanf("%d",&mat2[i][j]);
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            if(mat1[i][j]!=mat2[i][j]) equal=0;
    if(equal) printf("Matrices are equal.\n");
    else printf("Matrices are not equal.\n");
    return 0;
}
