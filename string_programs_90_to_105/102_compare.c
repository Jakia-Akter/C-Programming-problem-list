#include <stdio.h>
#include <string.h>
int main(){
    char a[200], b[200];
    gets(a); gets(b);
    if(strcmp(a,b)==0) printf("Equal");
    else printf("Not Equal");
    return 0;
}