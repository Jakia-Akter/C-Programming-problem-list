#include <stdio.h>
#include <string.h>
int main() {
    char a[200], b[200], res[400];
    scanf("%s %s", a, b);
    int i=strlen(a)-1, j=strlen(b)-1, k=0, carry=0;
    while(i>=0 || j>=0 || carry){
        int sum=carry;
        if(i>=0) sum+=a[i--]-'0';
        if(j>=0) sum+=b[j--]-'0';
        res[k++]=(sum%2)+'0';
        carry=sum/2;
    }
    res[k]=0;
    for(int l=k-1;l>=0;l--) putchar(res[l]);
    return 0;
}