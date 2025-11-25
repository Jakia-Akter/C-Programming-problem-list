#include <stdio.h>
int main(){
    long x;
    scanf("%ld",&x);
    char s[100];
    sprintf(s, "%ld", x);
    printf("%s", s);
    return 0;
}