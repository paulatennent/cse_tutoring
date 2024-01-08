// A simple program with pointers.
#include <stdio.h>

int main(void) {
    
    // lets store an integer!

    int a = 5;

    // type: int
    // varname: a
    // value: 5
    // Address: 0xaaaa -> %p

    printf("a's value is: %d\n", a);
    printf("a's address is: %p\n", &a);




    // what if we stored an address?
    int *ptr_to_a; // type is : "int *"
    ptr_to_a = &a; // value is : &a (same as what was printed above)


    // type: int *
    // varname: ptr_to_a
    // value: 0xaaaa
    // Address: 0xaaae


    printf("p's value is : %p\n", ptr_to_a);
    printf("p's address is: %p\n", &ptr_to_a);





    // there is 1 more thing we can do!
    // without using 'a', print out '5'

    printf("the value of a is: %d", *ptr_to_a)

    *ptr_to_a = 6;
    printf("%d", a);
    a = 10;
    printf("%d", *ptr_to_a);
    
}

