#include <stdio.h>
int main(){
    int n,rev=0,r;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n){
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    printf("Reversed = %d",rev);
    return 0;
}