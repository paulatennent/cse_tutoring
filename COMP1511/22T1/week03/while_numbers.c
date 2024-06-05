// A c program that prints numbers in a while loop
// by Paula Tennent

#include <stdio.h>

int main(void) {

    printf("How many stars:");
    int input;
    scanf("%d", &input);


    int counter2 = 0;
    while (counter2 < input) {

         int counter = 0;
        while (counter < input) {

            if (counter % 2 == 0) {
                printf("-");
            } else {

                printf("*");
            }



            counter = counter + 1;
        }
        printf("\n");
        

        counter2++;
    }





   

    return 0;
}