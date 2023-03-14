// Written by Paula (2023)

#include <stdio.h>

// NOTE: We are using function here as a way to separate the tasks given to us
// in the tutorial exercise, later in the term will we learn how to use
// functions better :)


// Exercise 1
void odd_only() {
    // create an integer array with at least 5 elements
    int numbers[5] = {3, 4, 5, 6, 7};
    int size = 5;

    // loop over the array
    int i = 0;
    while (i < size) {

        // add 1 to each element
        if (numbers[i] % 2 == 0) {
            numbers[i]++;
        }

        i++;
    }

    //  print out the array
    printf("odd only array: ");
    int j = 0 ;
    while (j < size) {

        printf("%d ", numbers[j]);
        j++;
    }
    printf("\n");
}

// Exercise 2:
void copy_array() {

    // create arrays of doubles
    double numbers[3] = {3.4, 5.2, 7.4};

    // create another array of doubles initialised to 0
    double more_numbers[10] = {0};

    // loop over the first array
    int i = 0;
    while (i < 3) {
        more_numbers[i] = numbers[i];
    }

    printf("copied array: ");
    i = 0 ;
    while (i < 10) {

        printf("%lf ", numbers[i]);
        i++;
    }
    printf("\n");
}

// Exercise 3:
int largest_character() {

    // create an array with 8 characters
    char letters[8] = {'a', 'b', 'c', 'd', 'w', 'x', 'y', 'z'};

    char largest_character = letters[0];

    int i = 0;
    while (i < 8) {
        if (letters[i] > largest_character) {
            largest_character = letters[i];
        }
        i++;
    }

    printf("The largest character is: %c", largest_character);
}

int main(void) {

    odd_only();
    copy_array();
    largest_character();

    return 0;
}
