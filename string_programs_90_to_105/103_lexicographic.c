#include <stdio.h>
#include <string.h>
int main(){
    char a[200], b[200];
    gets(a); gets(b);
    int r=strcmp(a,b);
    if(r<0) printf("a < b");
    else if(r>0) printf("a > b");
    else printf("a == b");
    return 0;
}