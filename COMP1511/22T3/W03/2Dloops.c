#include <stdio.h>
#define SIZE 5


void a(void) {
    int row = 0;
    while (row < SIZE) {
        int col = 0;
        while (col < SIZE) {
            if (row == col) {
                printf("O");
            } else {
                printf("X");

            }
            col++;
        }
        row++;
        printf("\n");
    }
}

void b(void) {
    int row = 0;
    while (row < SIZE) {
        int col = 0;
        while (col < SIZE) {
            if (col % 2 == 0) {
                printf("O");
            } else {
                printf("X");

            }
            col++;
        }
        row++;
        printf("\n");
    }
}

void c(void) {
    int row = 0;
    while (row < SIZE) {
        int col = 0;
        while (col < SIZE) {
            if (col != 1 && row != 1) {
                printf("O");
            } else {
                printf("X");

            }
            col++;
        }
        row++;
        printf("\n");
    }
}

void d(void) {
    int row = 0;
    while (row < SIZE) {
        printf("X");
        int col = 1;
        while (col < 3) {
            if (row == 0 || row == 3) {
                printf("X");
            } else {
                printf("O");
            }
            col++;
        }
        printf("X");
        row++;
        printf("\n");
    }
}

int main(void) {

    // printf("\na is: \n");
    // a();

    // printf("\nb is: \n");
    // b();

    // printf("\nc is: \n");
    // c();

    // printf("\nd is: \n");
    // d();


    int i = 0;
    while (i < 5) {
        

        int j = 0;
        while (j < 5) {
            
            if (j % 2 == 0) {
                printf("O");
            } else {

                printf("X");
            }

            j++;
        }


        printf("\n");
        i++;
    }



    return 0;
}