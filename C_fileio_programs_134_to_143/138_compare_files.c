
#include <stdio.h>

int main() {
    FILE *f1=fopen("file1.txt","r");
    FILE *f2=fopen("file2.txt","r");

    if(!f1 || !f2){ printf("File error\n"); return 1; }

    int c1, c2, pos=0, mismatch=0;
    while( (c1=fgetc(f1)) != EOF && (c2=fgetc(f2)) != EOF ){
        pos++;
        if(c1 != c2){
            printf("Mismatch at position %d: %c != %c\n", pos, c1, c2);
            mismatch=1;
        }
    }

    if(!mismatch) printf("Files match.\n");

    fclose(f1); fclose(f2);
    return 0;
}
