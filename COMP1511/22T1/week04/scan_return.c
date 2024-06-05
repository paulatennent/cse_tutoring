#include <stdio.h>

int main(void) {

    char input;
    
    printf("enter a number: ");
    while(scanf(" %c", &input) != -1) {

        printf("input: %c\n", input);
        printf("enter a number: ");

    }

    printf("WHILE STOPPED");

}