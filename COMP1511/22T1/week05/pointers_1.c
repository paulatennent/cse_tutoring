#include <stdio.h>

int main(void) {

    int num = 10;
    int *num_ptr = &num;

    printf("%d, %p, %d", num, num_ptr, *num_ptr);

}