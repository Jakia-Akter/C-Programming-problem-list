#include <stdio.h>
int main(){
    int *arr[3][3];
    int a=1,b=2,c=3,d=4,e=5,f=6,g=7,h=8,i=9;
    arr[0][0]=&a; arr[0][1]=&b; arr[0][2]=&c;
    arr[1][0]=&d; arr[1][1]=&e; arr[1][2]=&f;
    arr[2][0]=&g; arr[2][1]=&h; arr[2][2]=&i;
    printf("%d", *arr[1][1]);
    return 0;
}