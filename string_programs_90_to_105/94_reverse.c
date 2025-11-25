#include <stdio.h>
#include <string.h>
int main(){
    char s[200];
    gets(s);
    int n=strlen(s);
    for(int i=n-1;i>=0;i--) putchar(s[i]);
    return 0;
}