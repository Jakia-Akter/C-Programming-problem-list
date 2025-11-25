#include <stdio.h>
int main(){
    double x;
    scanf("%lf",&x);
    char s[100];
    sprintf(s, "%lf", x);
    printf("%s", s);
    return 0;
}