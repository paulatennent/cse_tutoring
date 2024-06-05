#include <stdio.h>

#define MAX_SIZE 10

void print_arr(int rows, int cols, int matrix[rows][cols]);
void scalar_multiply(int rows, int columns, int matrix[rows][columns],  int scalar);

int main(void) {

    int my_rows = 3;
    int my_cols = 4;
    int my_arr[3][4] = {{1, 2, 3, 4}, {2, 3, 4, 5}, {3, 4, 5, 6}};

    printf("Array before: \n");
    print_arr(my_rows, my_cols, my_arr);

    scalar_multiply(my_rows, my_cols, my_arr, 10);

    printf("Array after: \n");
    print_arr(my_rows, my_cols, my_arr);

}

void scalar_multiply(int rows, int columns, int matrix[rows][columns],  int scalar) {

    int i = 0;
    while (i < rows) {
        int j = 0;
        while (j < columns) {
            matrix[i][j] = matrix[i][j] * scalar;
            j++;
        }
        i++;
    }

}


void print_arr(int rows, int cols, int matrix[rows][cols]) {
    
    int row = 0;
    while (row < rows) {

        int col = 0;
        while (col < cols) {

            printf("%d ", matrix[row][col]);

            col++;
        }
        printf("\n");
        row++;
    }
}