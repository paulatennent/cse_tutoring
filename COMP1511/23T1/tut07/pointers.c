// A simple program with pointers.
#include <stdio.h>

int main(void) {
    
    // STEP 1 -> create a regular variable
    int a;
    a = 3;
    // print out the value
    printf("a: %d\n", a);
    // print out the address
    printf("&a: %p\n\n", &a);

    // STEP 2 -> create a pointer variable
    int *b;
    b = &a; // setting b to be a memory address.
    // print out the value
    printf("b: %p\n", b); // notice its the same as the address of a
    // print out the address
    printf("&b: %p\n", &b);


    // STEP 3 -> Use dereferencing
    // a and *b are interchangable
    printf("%? is the same as %?", a, *b);
    a = 6;
    printf("%? is the same as %?", a, *b);
    *b = 7;
    printf("%? is the same as %?", a, *b);
}

