#include <stdio.h>
int main(){
    int n,i,j; printf("Enter n: "); scanf("%d",&n);
    for(i=2;i<=n;i++){int f=0; for(j=2;j*j<=i;j++) if(i%j==0){f=1;break;} if(!f) printf("%d ",i);} return 0; }