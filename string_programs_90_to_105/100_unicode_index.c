#include <stdio.h>
int main(){
    char s[300];
    int idx;
    gets(s);
    scanf("%d",&idx);
    printf("%d", (unsigned char)s[idx]);
    return 0;
}