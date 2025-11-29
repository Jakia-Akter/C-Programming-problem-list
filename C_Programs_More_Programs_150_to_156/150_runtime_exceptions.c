#include <stdio.h>

int main() {
    int a = 10, b = 0;
    printf("Runtime Exception Example:\n");

    if (b == 0) {
        printf("Error: Division by zero detected (runtime exception).\n");
    } else {
        printf("Result = %d\n", a / b);
    }

    int *ptr = NULL;
    if (ptr == NULL) {
        printf("Error: Null pointer dereference prevented.\n");
    }

    return 0;
}