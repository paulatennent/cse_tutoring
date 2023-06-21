// Written by Paula (2023)

// we want our solution to have this order:

// 1. scan in value
// 2. check if it scanned in
// 3. print out value
// 1. scan in value
// 2. check if it scanned in
// ...
// 3. print out value
// 1. scan in value
// 2. check if it scanned in -> when false, exit while!

#include <stdio.h>

int main(void) {
    int input_var;

    // step 1:
    int scanf_result = scanf("%d", &input_var);

    // step 2:
    // we check if scanf_result is 1 as we scanned in 1 value in the scanf.
    // if we had "%d %d %d", we would check `scanf_result == 3`
    while (scanf_result == 1) {

        // step 3:
        printf("Read %d", input_var);

        // step 1:
        scanf_result = scanf("%d", &input_var);
    }
}
