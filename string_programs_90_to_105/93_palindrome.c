#include <stdio.h>
#include <string.h>
int main(){
    char s[200];
    gets(s);
    int l=0, r=strlen(s)-1;
    while(l<r){
        if(s[l]!=s[r]){
            printf("Not Palindrome");
            return 0;
        }
        l++; r--;
    }
    printf("Palindrome");
    return 0;
}