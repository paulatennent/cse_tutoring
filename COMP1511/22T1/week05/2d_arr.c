#include <stdio.h>

#define SIZE 7

int main(void) {
    int row, column;

    int grid[SIZE][SIZE] = {0};

    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            
            grid[row][column] = 1;

            // printf("1");
            column = column + 1;
        }
        row = row + 1;
    }

    row = 0;
    while (row < SIZE) {

        column = 0;
        while (column < SIZE) {

            printf("%d", grid[row][column]);
            column = column + 1;
        }


        row ++;
    }

    return 0;
}