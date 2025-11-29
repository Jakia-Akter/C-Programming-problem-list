#include <stdio.h>

int main() {
    FILE *fp = fopen(__FILE__, "r");
    char c;

    if (fp == NULL) {
        printf("Unable to open source file.\n");
        return 1;
    }

    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    fclose(fp);
    return 0;
}