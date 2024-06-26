#include <stdio.h>

void print_array(int array[], int length) {
    int i = 0;
    while (i < length) {
        printf("%d ", array[i]);

        i++;
    }
    printf("\n");
}

void add_one(int array[], int length) {

    int i = 0;
    while (i < length) {
        array[i] = array[i] + 1;
        i++;
    }
}

int main(void) {


    int array[3] = {1, 2, 3};

    print_array(array, 3);

    add_one(array, 3);

    print_array(array, 3);
}