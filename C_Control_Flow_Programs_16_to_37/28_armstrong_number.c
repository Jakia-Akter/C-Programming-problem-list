#include <stdio.h>
int main(){
    int n,r,sum=0,temp;
    printf("Enter number: ");
    scanf("%d",&n);
    temp=n;
    while(temp){
        r=temp%10;
        sum+=r*r*r;
        temp/=10;
    }
    if(sum==n) printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}