#include <stdio.h>
int main(){
    int a,b,i,r,sum,temp;
    printf("Enter interval: ");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        temp=i; sum=0;
        while(temp){
            r=temp%10;
            sum+=r*r*r;
            temp/=10;
        }
        if(sum==i) printf("%d ",i);
    }
    return 0;
}