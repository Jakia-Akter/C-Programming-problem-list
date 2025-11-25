#include <stdio.h>
#include <stdlib.h>
int main(){
    char s[100];
    gets(s);
    long v = atol(s);
    printf("%ld", v);
    return 0;
}