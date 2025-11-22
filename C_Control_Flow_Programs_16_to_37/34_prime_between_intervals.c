#include <stdio.h>
int main(){
    int a,b,i,j,flag;
    printf("Enter interval: ");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        if(i<2) continue;
        flag=0;
        for(j=2;j*j<=i;j++)
            if(i%j==0){flag=1; break;}
        if(!flag) printf("%d ",i);
    }
    return 0;
}