#include <stdio.h>
#include <string.h>
int main(){
    char s[300];
    int f[256]={0};
    gets(s);
    for(int i=0;s[i];i++) f[(unsigned char)s[i]]++;
    for(int i=0;s[i];i++){
        if(f[(unsigned char)s[i]]==1){
            printf("%c", s[i]);
            return 0;
        }
    }
    printf("None");
    return 0;
}