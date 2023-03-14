#include <stdio.h>
#include <math.h>

struct colour {
    int red;
    int green;
    int blue;
};

struct colour make_colour(int red, int green, int blue);
double brightness(struct colour colour);
double average_brightness(struct colour colours[100], int size);

int main(void) {

    struct colour pink = make_colour(255, 0, 100);
    struct colour lime = make_colour(178, 255, 100);

    struct colour colours[] = {pink, lime};

    double average = average_brightness(colours, 2);
    printf("The average brightness is %lf\n", average);

}

// creates a new struct colour when given the three colour values
struct colour make_colour(int red, int green, int blue) {
    struct colour new_colour;

    new_colour.red = red;
    new_colour.green = green;
    new_colour.blue = blue;

    return new_colour;
}

// returns the brightness of the colour
double brightness(struct colour colour) {
    return sqrt(colour.red) + sqrt(colour.green) + sqrt(colour.blue);
}

// returns the average brightness of an arrays of colours
double average_brightness(struct colour colours[], int size) {
    double avg = 0;

    int i = 0;
    while (i < size) {
        avg += brightness(colours[i]);
        i++;
    }

    return avg / size;
}
