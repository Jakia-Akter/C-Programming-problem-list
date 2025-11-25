#include <stdio.h>
#include <ctype.h>
int main(){
    char s[300];
    gets(s);
    if(isalpha(s[0])) printf("%c ", s[0]);
    for(int i=1;s[i];i++)
        if(s[i-1]==' ' && isalpha(s[i])) printf("%c ", s[i]);
    return 0;
}