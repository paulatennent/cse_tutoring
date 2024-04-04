#include <stdio.h>

int main(void) {

    int i = 0;
    while (i < 10) {


        /////////

        int j = 0;
        while (j < 20) {

            if (i * i + j * j == 10) {
                printf("*");
            } else {
                printf("_");
            }


            j++;
        }
        
        printf("\n");
        /////////




        i++;
    }
    


    return 0;
}