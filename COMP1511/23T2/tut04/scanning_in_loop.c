// Written by Paula (2023)

#include <stdio.h>

#define NUM_DAYS 7

// returns the max number in an array.
int max_in_array(int array[], int len) {

    int max = array[0];
    for (int i = 0; i < len; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}

int main(void) {

    // Declare and initialise array
    int temps[NUM_DAYS] = {0};

    // Read in values
    for (int i = 0; i < NUM_DAYS; i++) {
        scanf("%d", &temps[i]);
    }

    int max_temp = max_in_array(temps, NUM_DAYS);
    printf("Max temp is: %d\n", max_temp);

    return 0;
}
