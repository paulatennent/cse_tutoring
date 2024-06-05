// A small c program about structs
// by Paula Tennent

#include <stdio.h>

// Define struct here
// it should include the hour, minute and meridiem
struct time {
    int hour;
    int minute;
    char meridiem; // 'a' 'p'
};

int main(void) {

    // initialise the struct.
    struct time curr_time;
    curr_time.hour = 3;
    curr_time.minute = 37;
    curr_time.meridiem = 'p';

    // print out the hour.
    struct time curr_time2 = curr_time;
    curr_time.hour = 4;

    // print out the full time.
    printf("hour: %d, minute: %d, meridiem: %c \n", curr_time2.hour, curr_time2.minute, curr_time2.minute );


    return 0;
}
