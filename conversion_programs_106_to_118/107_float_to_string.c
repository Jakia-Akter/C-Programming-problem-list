#include <stdio.h>
int main(){
    float x;
    scanf("%f",&x);
    char s[50];
    sprintf(s, "%f", x);
    printf("%s", s);
    return 0;
}