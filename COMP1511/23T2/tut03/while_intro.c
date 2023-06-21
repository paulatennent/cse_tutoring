#include <stdio.h>

int main(void) {

    int j = 0;
    while (j < 10) {

        // code to print helllllo
        int i = 0;
        while (i < 10) {


            if (i == j + 2) {
                printf("*");
            } else {
                printf("-");
            }

            i = i + 1;
        }
        printf("\n");


        j++;
    }

    return 0;
}