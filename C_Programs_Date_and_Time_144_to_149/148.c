#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);

    struct tm *local_tm = localtime(&t);
    struct tm *gmt_tm = gmtime(&t);

    printf("Local Time: %02d:%02d:%02d\n",
           local_tm->tm_hour, local_tm->tm_min, local_tm->tm_sec);

    printf("GMT Time:   %02d:%02d:%02d\n",
           gmt_tm->tm_hour, gmt_tm->tm_min, gmt_tm->tm_sec);

    return 0;
}