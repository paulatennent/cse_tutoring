#include <stdio.h>

int main(void) {


    int i = 0;
    while (i < 10) {

        /// print helllllo
        int j = 0;
        while (j < 10) {

            if (i == j * j) {
                printf("*");
            } else {
                printf("_");
            }
            
            j++;
        }
        printf("\n");
        // end of word

        i++;
    }

    return 0;
}