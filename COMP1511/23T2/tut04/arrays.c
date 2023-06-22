// Written by Paula (2023)

#include <stdio.h>

#define MAX 100

// add 1 to any even values -> the arrays should now be all ODD!
void odd_only(int array[], int length) {
    int i = 0;
    while (i < length) {
        if (array[i] % 2 == 0) {
            array[i] += 1;
        }
        i++;
    }
}

// given 2 arrays, copy the values from the first array
// into the second
void copy_array_values(int array1[], int array2[], int length) {
    int i = 0;
    while (i < length) {
        array2[i] = array1[i];
        i++;
    }
}

// find the largest number in the array, return it
int largest_number(int array[], int length) {
    int i = 0;
    int max = array[0];
    while (i < length) {
        if (array[i] > max) {
            max = array[i];
        }
        i++;
    }
    return max;
}

// prints out an array
void print_array(int array[], int length) {
    int i = 0;
    printf("[");
    while (i < length) {
        if (i != 0) {
            printf(" ");
        }
        printf("%d", array[i]);
        i++;
    }
    printf("]\n");
}

int main(void) {

    // create an array
    int numbers[MAX] = {1, 2, 4, 5, 6};
    print_array(numbers, 5);

    // pass it into odd_only();
    odd_only(numbers, 5);

    print_array(numbers, 5);

    // create a second array (make it empty or all 0's)
    int numbers2[MAX] = {0};

    // pass the two arrays into copy_array_values
    copy_array_values(numbers, numbers2, 5);


    // find the largest number in the second array
    int largest = largest_number(numbers2, 5);
    printf("The largest number is: %d\n", largest);

    return 0;
}
