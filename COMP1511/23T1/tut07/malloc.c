#include <stdio.h>

struct pet {
    int age;
    int weight;
    char name[100];
};

int main(void) {


    // Creating variables on the STACK
    int i; // -> sizeof(int)
    double d; // -> sizeof(double)
    int array1[10]; // -> (10 * sizeof(int))
    char array2[4];
    struct pet coco; // -> sizeof(struct pet)
    struct pet class_pets[5];
    printf("size of d: %lu\n", sizeof(class_pets));

    // Creating variables on the HEAP
    int *i2 = malloc(sizeof(int));
    struct pet *coco2 = malloc(sizeof(struct pet));
    int *array3 = malloc(sizeof(int) * 10); // -> (10 * sizeof(int))

    // Using our vairbales we created on the heap
    *i2 = 3;
    coco2->weight = 3;
    array[3] = 10;

}
