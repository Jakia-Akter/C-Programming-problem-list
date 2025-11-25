#include <stdio.h>
#include <string.h>
int main(){
    char s[300];
    gets(s);
    char *p=strtok(s," ");
    while(p){
        printf("%s\n", p);
        p=strtok(NULL," ");
    }
    return 0;
}