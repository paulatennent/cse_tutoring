#include <stdio.h>

#define LENGTH 5

int main(void) {

    int my_array[LENGTH] = {1, 3, 6, -2, 3};

    // remove all negatives
  
    int i = 0;
    while (i < LENGTH) {
        if (my_array[i] < 0) {
            my_array[i] = -my_array[i];
        }
        i++;
    }

    // print the my_array
    
    i = 0;
    while (i < LENGTH) {
        printf("%d ", my_array[i]);
        i++;
    }
    printf("\n");

    // find the largest element
    
    int largest = my_array[0];
    i = 0;
    while (i < LENGTH) {
        if (my_array[i] > largest) {
            largest = my_array[i];
        }
        i++;
    }

    printf("The largest element is: %d\n", largest);
  
    return 0;
}
