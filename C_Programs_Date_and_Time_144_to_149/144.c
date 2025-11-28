#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *tm_info = localtime(&t);

    int hour = tm_info->tm_hour;
    char am_pm[3] = "AM";

    if (hour >= 12) {
        am_pm[0] = 'P';
        hour = hour > 12 ? hour - 12 : 12;
    } else if (hour == 0) {
        hour = 12;
    }

    printf("Current Time: %02d:%02d:%02d %s\n",
           hour, tm_info->tm_min, tm_info->tm_sec, am_pm);

    return 0;
}