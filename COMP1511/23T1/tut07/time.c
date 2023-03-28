#include <stdio.h>

void increment_time(int *days, int *hours, int *minutes);

int main(void) {
    int d = 3;
    int h = 4;
    int m = 59;

    increment_time(&d, &h, &m);

    printf("Current time: %d days, %d hours and %d minutes", d, h, m);

    return 0;
}

// increments the time by 1 minute
void increment_time(int *days, int *hours, int *minutes) {
    (*minutes)++;
    if (*minutes == 60) {
        *minutes = 0;
        (*hours)++;
    }

    if (*hours == 24) {
        *hours = 0;
        (*days)++;
    }
}
