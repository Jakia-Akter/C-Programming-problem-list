#include <stdio.h>
int main(){
    int i,n,r,sum,temp;
    for(i=1;i<=1000;i++){
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