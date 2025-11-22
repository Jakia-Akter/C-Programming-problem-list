#include <stdio.h>
int main(){
    int n,temp,rev=0,r;
    printf("Enter number: ");
    scanf("%d",&n);
    temp=n;
    while(temp){
        r=temp%10;
        rev=rev*10+r;
        temp/=10;
    }
    if(rev==n) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}