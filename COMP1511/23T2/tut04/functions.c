// written by Paula (2023)

#include <stdio.h>
#include <math.h>

struct colour {
    int red;
    int green;
    int blue;
};


int main(void) {

    struct colour pink = {255, 0, 100};
    struct colour lime = {178, 255, 100};





    ///////////////////////////////////////////////
    // TASK 1: Finding each colours brightnesses //
    ///////////////////////////////////////////////

    double pink_brightness = sqrt(pink.red) + sqrt(pink.green) + sqrt(pink.blue);
    double lime_brightness = sqrt(lime.red) + sqrt(lime.green) + sqrt(lime.blue);


    // printing brightness of both colours
    printf("pink's brightness is %lf\n", pink_brightness);
    printf("lime's brightness is %lf\n", lime_brightness);







    ////////////////////////////////////////////
    // TASK 2: Finding the average brightness //
    ////////////////////////////////////////////

    double average = (pink_brightness + lime_brightness) / 2
    printf("The average brightness is %lf\n", average);








    ///////////////////////////////////////////////////////////
    // TASK 3: input in a colour, check if its an emo colour //
    ///////////////////////////////////////////////////////////

    scanf("scan in your favourite colour in rgb: ");
    struct colour fav;
    scanf("%d %d %d", &fav.red, &fav.green, &fav.blue);

    // if input was black
    if (fav.red == 0 && fav.green == 0 && fav.blue == 0) {
        printf("you are emo o.o\n");
    } else {
        printf("you are not emo ^w^\n")
    }

    return 0;
}
