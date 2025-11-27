
#include <stdio.h>

int main() {
    char filename[L_tmpnam];
    tmpnam(filename);
    printf("Temporary file created: %s\n", filename);

    FILE *fp = fopen(filename, "w");
    fprintf(fp, "This is a temporary file.\n");
    fclose(fp);

    return 0;
}
