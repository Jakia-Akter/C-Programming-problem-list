#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[50], i=0;
    if(n==0){ printf("0"); return 0; }
    while(n>0){
        a[i++] = n%2;
        n/=2;
    }
    for(int j=i-1;j>=0;j--) printf("%d", a[j]);
    return 0;
}