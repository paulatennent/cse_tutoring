// exam_q3.c
//
// This program was written by YOUR-NAME-HERE (z5555555)
// on INSERT-DATE-HERE
//
// One line summary of what this exercise does.
#include <stdio.h>
#include <stdlib.h>

int min(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int main(void) {
    // TODO: Finish the following line.
    int num;
    int nums[10000];
    int min_dist = 10001;
    int i = 0;
    while (scanf("%d", &num) == 1) {
        nums[i] = num;
        
        int j = i - 1;
        while (j >= 0 && nums[j] != num) {
            j--;
        }
        if (j >= 0 && nums[j] == num) {
            min_dist = min(min_dist, i - j);
        }
        i++;
    }

    
    printf("The minimum distance was: %d\n", min_dist);

    return 0;
}
