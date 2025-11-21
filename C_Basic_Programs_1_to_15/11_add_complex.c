#include <stdio.h>
typedef struct{float r,i;}complex;
int main(){
    complex a,b,sum;
    printf("Enter a (real imag): "); scanf("%f %f",&a.r,&a.i);
    printf("Enter b (real imag): "); scanf("%f %f",&b.r,&b.i);
    sum.r=a.r+b.r; sum.i=a.i+b.i;
    printf("Sum = %.2f + %.2fi",sum.r,sum.i);
    return 0;
}