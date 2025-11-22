#include <stdio.h>
int main(){
    int n,i,j,c;
    printf("Enter rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        c=1;
        for(j=1;j<=n-i;j++) printf(" ");
        for(j=0;j<=i;j++){
            printf("%d ",c);
            c=c*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}