#include <stdio.h>
int main(){
    int n,sq,sum=0,r;
    printf("Enter number: ");
    scanf("%d",&n);
    sq=n*n;
    while(sq){
        r=sq%10;
        sum+=r;
        sq/=10;
    }
    if(sum==n) printf("Neon Number");
    else printf("Not Neon Number");
    return 0;
}