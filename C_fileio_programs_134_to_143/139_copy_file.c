
#include <stdio.h>

int main() {
    FILE *src=fopen("source.txt","r");
    FILE *dest=fopen("dest.txt","w");
    if(!src || !dest){ printf("Error opening files\n"); return 1; }

    int ch;
    while((ch=fgetc(src))!=EOF)
        fputc(ch, dest);

    printf("File copied successfully.\n");

    fclose(src); fclose(dest);
    return 0;
}
