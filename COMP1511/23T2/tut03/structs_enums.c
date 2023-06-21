// written by Paula (2023)

#include <stdio.h>

//enum ...

//struct ...


int main(void) {

    int josie_age = 5;
    double josie_weight = 5.6; // kg
    char josie_animal_type = 'c'; // 'c' is for cat!


    printf("Josie is %d years old and weighs %.2lf kg.\n", josie_age, josie_weight);

    printf("Josie is a ");
    if (josie_animal_type == 'c') {
        printf("cat");
    }
    printf("!\n");

    return 0;
}
