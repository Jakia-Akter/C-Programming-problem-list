
#include <stdio.h>

int main() {
    FILE *src=fopen("source.txt","r");
    FILE *dest=fopen("target.txt","a");

    if(!src || !dest){ printf("Error opening file\n"); return 1; }

    int ch;
    while((ch=fgetc(src))!=EOF)
        fputc(ch, dest);

    printf("Appended successfully.\n");

    fclose(src); fclose(dest);
    return 0;
}
