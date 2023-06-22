// written by Paula (2023)

#include <stdio.h>
#include <math.h>

struct colour {
    int red;
    int green;
    int blue;
};

double brightness(struct colour c);
double average_brightness(struct colour colours[], int length);
int is_black(struct colour c);

int main(void) {

    struct colour pink = {255, 0, 100};
    struct colour lime = {178, 255, 100};





    ///////////////////////////////////////////////
    // TASK 1: Finding each colours brightnesses //
    ///////////////////////////////////////////////

    double pink_brightness = brightness(pink);
    double lime_brightness = brightness(lime);


    // printing brightness of both colours
    printf("pink's brightness is %lf\n", pink_brightness);
    printf("lime's brightness is %lf\n", lime_brightness);


    ////////////////////////////////////////////
    // TASK 2: Finding the average brightness //
    ////////////////////////////////////////////

    struct colour colours[2] = {pink, lime};
    double average = average_brightness(colours, 2);
    printf("The average brightness is %lf\n", average);



    ///////////////////////////////////////////////////////////
    // TASK 3: input in a colour, check if its an emo colour //
    ///////////////////////////////////////////////////////////

    printf("scan in your favourite colour in rgb: ");
    struct colour fav;
    scanf("%d %d %d", &fav.red, &fav.green, &fav.blue);

    // if input was black
    if (is_black(fav)) {
        printf("you are emo o.o\n");
    } else {
        printf("you are not emo ^w^\n");
    }

    return 0;
}

double brightness(struct colour c) {
    return sqrt(c.red) + sqrt(c.green) + sqrt(c.blue);
}

double average_brightness(struct colour colours[], int length) {
    double sum = 0;
    int i = 0;
    while (i < length) {
        sum += brightness(colours[i]);
        i++;
    }
    return sum / length;
}

int is_black(struct colour c) {
    return c.red == 0 && c.green == 0 && c.blue == 0;
}
