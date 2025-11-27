
#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex add(struct Complex a, struct Complex b){
    struct Complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}

int main() {
    struct Complex a, b, sum;
    printf("Enter first complex number (real imag): ");
    scanf("%f %f", &a.real, &a.imag);
    printf("Enter second complex number (real imag): ");
    scanf("%f %f", &b.real, &b.imag);

    sum = add(a,b);

    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imag);
    return 0;
}
