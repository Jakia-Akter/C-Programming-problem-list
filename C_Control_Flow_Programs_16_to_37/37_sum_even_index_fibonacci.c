#include <stdio.h>
int main(){
    int n,i,a=0,b=1,c,sum=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(i%2==0) sum+=a;
        c=a+b;
        a=b;
        b=c;
    }
    printf("Sum = %d",sum);
    return 0;
}