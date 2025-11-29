#include <stdio.h>

int main() {
    printf("Before return statement\n");

    return 0;

    printf("This is unreachable code and will never execute.\n");
    // Most compilers warn: "unreachable code detected"
}