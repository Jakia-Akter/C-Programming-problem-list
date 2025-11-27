
#include <stdio.h>

int main() {
    FILE *src=fopen("input.txt","r");
    FILE *dest=fopen("output.txt","w");

    if(!src || !dest){ printf("File error\n"); return 1; }

    int c;
    while((c=fgetc(src))!=EOF)
        fputc(c, dest);

    printf("Content copied.\n");

    fclose(src); fclose(dest);
    return 0;
}
