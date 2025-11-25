#include <stdio.h>
#include <string.h>
int main() {
    char a[200], b[200];
    gets(a);
    gets(b);
    strcat(a, b);
    printf("%s", a);
    return 0;
}