#include <stdio.h>
#include <string.h>
int main(){
    char a[300], b[100], out[400];
    int pos;
    gets(a); gets(b);
    scanf("%d",&pos);
    strncpy(out,a,pos);
    out[pos]=0;
    strcat(out,b);
    strcat(out,a+pos);
    printf("%s", out);
    return 0;
}