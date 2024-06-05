#include <stdio.h>

// creates an array of size [size]
int *create_arr(int size) {

    // create the array

    // set all values to be 0

}

// doubles an arrays size
void double_arr(int *arr, int curr_size) {
    // double the size of the array

    // set all values to be 1

}

// prints out an array.

void print_arr(int *arr, int size) {
    int i = 0;
    printf("array: ")
    while (i < size) {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
}

int main(void) {
    int size = 5;
    
    int *my_arr = create_arr(size);

    print_arr(my_arr, size)

    double_arr(my_arr, size);
    size = size * 2;
    print_arr(my_arr, size);
}