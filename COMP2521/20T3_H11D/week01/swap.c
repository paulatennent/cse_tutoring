// written by Paula Tennent (2021)
// a simple program that swaps two values in an array
// COMP2521 21T3 W1 Tut (c revision - q3)


#include <stdio.h>

void swap(int a[], int i, int j);

int main(void) {
    int a[5] = {1, 2, 3, 4, 5};
    swap(a, 4, 3);
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
}

// a simple swap program
void swap(int* a, int i, int j) {
    int temp = a[j];
    a[j] = a[i];
    a[i] = temp;
}