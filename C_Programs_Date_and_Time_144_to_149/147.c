#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *tm_info = localtime(&t);

    char date_buf[50], time_buf[50];

    strftime(date_buf, 50, "%Y-%m-%d", tm_info);
    strftime(time_buf, 50, "%H:%M:%S", tm_info);

    printf("Current Date: %s\n", date_buf);
    printf("Current Time: %s\n", time_buf);

    return 0;
}