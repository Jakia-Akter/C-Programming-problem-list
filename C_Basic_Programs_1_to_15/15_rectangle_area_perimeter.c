#include <stdio.h>
int main(){
    float l,w;
    printf("Enter length and width: "); scanf("%f %f",&l,&w);
    printf("Area = %.2f\nPerimeter = %.2f", l*w, 2*(l+w));
    return 0;
}