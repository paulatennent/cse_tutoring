#include <stdio.h>

int is_even(int number);

int main(void) {

    int input;
    printf("Input a number: ");
    scanf("%d", &input);

    if (is_even(input)) {
        printf("%d is even\n", input);
    } else {
        printf("%d is odd\n", input);
    }

    return 0;
}

// returns 1 if the number is even, and 0 if the number is odd
int is_even(int number) {

    if (number % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}