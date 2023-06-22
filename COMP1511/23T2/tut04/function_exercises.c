// Written by Paula Tennent (2023)

#include <stdio.h>

struct colour {
    int red;
    int green;
    int blue;
}; // note, make sure to move this above the main if you want it to compile

int main(void) {

    
    return 0;
}

// EASY: Write a function that returns 1 (aka true) if a number is even
// or 0 (aka false) if the number is odd
int is_even(int num) {
    return num % 2 == 0;
}


// MEDIUM: Write a function that takes in a char and returns the uppercase
// version of that char 
char to_uppercase(char c) {
    if ('a' <= c && c <= 'z') {
        return c + ('a' - 'A');
    }
}


// HARD: Write a function that takes in a struct colour and finds the
// average of the RGB values

// NOTE 1: the average formula is sqrt(red) + sqrt(green) + sqrt(blue)
// NOTE 2: you have access too the double sqrt(int num); function




