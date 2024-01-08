// written by Paula (2023)

#include <stdio.h>

enum colour {WHITE, BLACK, ORANGE};

struct pet {
    int age;
    enum colour fur_colour;
    double weight;
};

int main(void) {


    struct pet josie = {.age = 5, .fur_colour = BLACK, .weight = 5.6};
    struct pet coco;
    coco.age = 3;
    coco.fur_colour = WHITE;
    coco.weight = 7.6;

    // if josie has a birthday:
    josie.age++;


    // we can't print out a whole struct, we need to break it down into its parts.
    printf("Josie's age is %d and her weight is %lf", josie.age, josie.weight);


    // we can't print out an ENUMs value, we need to do an if-elseif instead :/
    printf("Josies fur colour is ");
    if (josie.fur_colour == BLACK) {
        printf("black");
    } else if (josie.fur_colour == WHITE) {
        printf("white");
    } else if (josie.fur_colour == ORANGE) {
        printf("orange");
    }
    printf(".\n");

    return 0;
}
