#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isSorted(int *a, int n);

int main(void) {
    int a[5] = {1, 2, 3, 5, 10};
    printf("%d ", isSorted(a, 5));
    int b[6] = {1, 2, 5, 4, 7, 9};
    printf("%d ", isSorted(b, 6));
    int c[4] = {1, 2, 2, 3};
    printf("%d ", isSorted(c, 4));

}

// checks if a list is sorted of not
bool isSorted(int *a, int n) {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i+1]) return false;
    }
    return true;
}