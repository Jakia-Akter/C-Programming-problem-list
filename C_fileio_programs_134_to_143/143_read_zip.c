
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Listing zip content using system call:\n");
    system("unzip -l sample.zip");
    return 0;
}
