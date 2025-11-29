#include <stdio.h>

/*
Types of Errors in C:
1. Compile-time Error  -> Missing semicolon, undeclared variable
2. Runtime Error       -> Division by zero
3. Logical Error       -> Incorrect logic
*/

int main() {
    int a = 10, b = 5;

    printf("Compile-time error example (commented):\n");
    printf("// int x = ;   <-- syntax error\n\n");

    printf("Runtime error example prevented:\n");
    if (b != 0)
        printf("10 / 5 = %d\n\n", a / b);

    printf("Logical error example:\n");
    printf("Wrong average of 10 and 20: %d\n", (10 + 20) / 3);

    return 0;
}