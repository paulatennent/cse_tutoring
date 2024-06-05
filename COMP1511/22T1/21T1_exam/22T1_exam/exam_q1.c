#include <stdio.h>
#include <stdlib.h>

struct coordinate {
    int x;
    int y;
};

// Return the total number of coordinates where the x coordinate is a 
// multiple of the y coordinate 
int count_multiple_coord(int size, struct coordinate array[size]){
    int count = 0;

    int i = 0;
    while (i < size) {
        if (array[i].y % array[i].x == 0) {
            count++;
        }
        i++;
    }

    return count;   
}

// This is a simple main function which could be used
// to test your count_multiple function.
// It will not be marked.
// Only your count_multiple function will be marked.

#define TEST_ARRAY_SIZE 5

int main(void) {
    struct coordinate test_array[TEST_ARRAY_SIZE] = {
        { .x = 3, .y = 20},
        { .x = 10, .y = 20},
        { .x = 3, .y = 30}, // <-- fix this line
        { .x = 20, .y = 10},
        { .x = 5, .y = 50}
    };
    printf("Total of coods where x is multiple of y is %d\n", count_multiple_coord(TEST_ARRAY_SIZE, test_array));
    return 0;
}
