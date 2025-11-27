
#include <stdio.h>
#include <stdlib.h>

int main() {
    if(system("chmod 444 sample.txt") == 0)
        printf("File is now read-only.\n");
    else
        printf("Failed to change permission.\n");
    return 0;
}
