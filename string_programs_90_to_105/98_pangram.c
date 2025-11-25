#include <stdio.h>
#include <ctype.h>
int main(){
    char s[500];
    int ok[26]={0};
    gets(s);
    for(int i=0;s[i];i++){
        char c=tolower(s[i]);
        if(c>='a'&&c<='z') ok[c-'a']=1;
    }
    for(int i=0;i<26;i++) if(!ok[i]){ printf("Not Pangram"); return 0; }
    printf("Pangram");
    return 0;
}