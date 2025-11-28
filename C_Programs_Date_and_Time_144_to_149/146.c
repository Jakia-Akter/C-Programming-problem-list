#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *tm_info = localtime(&t);

    char buffer[80];

    strftime(buffer, 80, "DD-MM-YYYY: %d-%m-%Y", tm_info);
    printf("%s\n", buffer);

    strftime(buffer, 80, "MM-DD-YYYY: %m-%d-%Y", tm_info);
    printf("%s\n", buffer);

    strftime(buffer, 80, "Full Date: %A, %B %d, %Y", tm_info);
    printf("%s\n", buffer);

    return 0;
}