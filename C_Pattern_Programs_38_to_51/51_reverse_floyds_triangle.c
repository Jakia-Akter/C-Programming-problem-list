#include <stdio.h>
int main(){
    int n,i,j,total=0,start;
    printf("Enter rows: ");
    scanf("%d",&n);

    total = n*(n+1)/2;
    start = total - n + 1;

    for(i=n;i>=1;i--){
        int num = start;
        for(j=1;j<=i;j++){
            printf("%d ", num++);
        }
        start -= (i-1);
        printf("\n");
    }

    return 0;
}