// written by Paula Tennent (2021)
// a simple program that demonstrates two pointers pointing to the same memory address.
// COMP2521 21T3 W1 Tut (c revision - q2)


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  
    /*
    notice how d changes when we only change c!
    This is becase c and d contain memory addresses which are the same
    C and D point to the same piece in memory!
    */
    char *c = malloc(sizeof("ABC"));
    char *d;
    d = c;
    strcpy(c, "ABC");
    printf("c: %s, d: %s\n", c, d);
    c[0] = 'a';
    printf("c: %s, d: %s\n", c, d);
    free(c);
}