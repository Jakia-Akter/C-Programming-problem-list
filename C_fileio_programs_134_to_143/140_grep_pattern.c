
#include <stdio.h>
#include <string.h>

int main() {
    char pattern[50], line[200];
    printf("Enter pattern: ");
    scanf("%49s", pattern);

    FILE *fp=fopen("input.txt","r");
    if(!fp){ printf("File error\n"); return 1; }

    while(fgets(line, sizeof(line), fp)){
        if(strstr(line, pattern))
            printf("%s", line);
    }

    fclose(fp);
    return 0;
}
