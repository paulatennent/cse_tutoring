#include <stdio.h>

void print_hello_world(void);
void print_time(int hours, int minutes);
int neg(int num);
void print_array(int array[], int length);
int largest(int array[], int length);

int main(void) {


    // A function that prints out "hello world".
    print_hello_world();

    // A function that takes in 2 integer (hour and minute) and prints out "The current time is __:__\n".
    print_time(9, 20);

    //A function that takes in an integer and returns the negative of it.
    int num = 3;
    printf("Negative of %d is %d\n", num, neg(num));
      
    // A function that prints out an array.
    int array[3] = {1, 2, 3};
    print_array(array, 3);

    // A function that takes in an array returns the largest element.
    printf("the largest element is %d\n", largest(array, 3));
}

void print_hello_world(void) {
    printf("Hello World!\n");
}

void print_time(int hours, int minutes) {
    printf("The time is: %d:%d\n", hours, minutes);
}

int neg(int num) {
    if (num > 0) {
        num = -num;
    }
    return num;
}

void print_array(int array[], int length) {
    int i = 0;
    while (i < length) {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");
}

int largest(int array[], int length) {
    if (length == 0) {
        return 0;
    }
    int largest = array[0];
    int i = 1;
    while (i < length) {
        if (array[i] > largest) {
            largest = array[i];
        }
        i++;
    }
    return largest;
}
