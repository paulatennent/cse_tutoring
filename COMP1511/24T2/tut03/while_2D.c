#include <stdio.h>

#define SIZE 4

void a(void) {
    int row = 0;
    while (row < SIZE) {
        int col = 0;
        while (col < SIZE) {
            if (row == 1 || col == 1) {
                printf("X");
            } else {
                printf("0");
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

void c(void) {
    int row = 0;
    while (row < SIZE) {
        printf("X");
        int col = 1;
        while (col < SIZE - 1) {
            if (row == 0 || row == SIZE - 1) {
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

void d(void) {
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

int main(void) {

    printf("What demo you want to run? ");
    char ch;
    scanf("%c", &ch);

    if (ch == 'a') {
        a();
    } else if (ch == 'b') {
        b();
    } else if (ch == 'c') {
        c();
    } else if (ch == 'd') {
        d();
    }

    return 0;
}
