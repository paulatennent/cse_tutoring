// written by Paula Tennent (2021)
// A simple program demonstrating command line arguments
// COMP2521 21T3 W1 Tut (command line / IO - q1)


#include <stdio.h>

int main(int argc, char *argv[]) {
    
    // argc: the number of command line arguments
    // argv: a list of the command line arguments
    //       an array of (char *)

    printf("argc is %d\n", argc);

    printf("the list of argv are: ")
    for (int i = 0; i < argc; i++) {
        printf("%s, ", argv[i]);
    }
    printf("\n");

    // if we do getchar or scanf, we take from standard input
    // although both are forms of input, standard input is different to command line arguments
    char ch = getchar();
    printf("char: %c", ch);

    // standard input: in inputted during runtime
    // can only be inputted when you run the program 
}