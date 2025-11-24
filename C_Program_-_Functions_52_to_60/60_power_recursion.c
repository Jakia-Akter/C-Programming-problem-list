
#include <stdio.h>
long long power(long long b,long long e){
    if(e==0) return 1;
    return b * power(b,e-1);
}
int main(){
    long long b,e;
    scanf("%lld %lld",&b,&e);
    printf("%lld",power(b,e));
    return 0;
}
