#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers (dividend divisor): ");
    scanf("%d %d", &a, &b);

    int quotient = a / b;
    int remainder = a % b;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}