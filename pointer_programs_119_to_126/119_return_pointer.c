#include <stdio.h>
int* getMax(int *a, int *b){
    return (*a > *b) ? a : b;
}
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int *p = getMax(&x, &y);
    printf("%d", *p);
    return 0;
}