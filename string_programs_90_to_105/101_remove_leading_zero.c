#include <stdio.h>
int main(){
    char s[300];
    gets(s);
    int i=0;
    while(s[i]=='0') i++;
    if(s[i]==0) printf("0");
    else printf("%s", s+i);
    return 0;
}