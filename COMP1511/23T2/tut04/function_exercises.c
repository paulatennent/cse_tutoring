// Written by Paula Tennent (2023)

#include <stdio.h>
#include <math.h>

struct colour {
    int red;
    int green;
    int blue;
};


int is_even(int num);
char to_uppercase(char c);
double brightness(struct colour c);

int main(void) {

    if (is_even(4)) {
        printf("4 is even\n");
    } else {
        printf("4 is odd\n");
    }


    char my_char = 'p';
    my_char = to_uppercase(my_char);
    printf("my char is %c\n", my_char);


    struct colour pink = {255, 100, 200};
    printf("The brightness of pink is %.2lf\n", brightness(pink));

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
        return c + ('A' - 'a');
    }
    return c;
}


// HARD: Write a function that takes in a struct colour and finds the
// average of the RGB values

// NOTE 1: the average formula is sqrt(red) + sqrt(green) + sqrt(blue)
// NOTE 2: you have access too the double sqrt(int num); function
double brightness(struct colour c) {
    return sqrt(c.red) + sqrt(c.green) + sqrt(c.blue);
}



