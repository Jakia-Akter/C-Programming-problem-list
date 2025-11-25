#include <stdio.h>
#include <string.h>
void rev(char *s,int i){
    if(i<0) return;
    putchar(s[i]);
    rev(s,i-1);
}
int main(){
    char s[200];
    gets(s);
    rev(s, strlen(s)-1);
    return 0;
}