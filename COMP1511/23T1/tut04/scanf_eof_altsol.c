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

    // since the while loop has to evaluate the scanf() before it can decide if
    // it is == 1, it will be forced to do the scanf before checking if the
    // return of scanf was correct. so step 1 happens before step 2, amazing!
    while (scanf("%d", &input_var) == 1) {

        printf("Read %d", input_var);

    }
}
