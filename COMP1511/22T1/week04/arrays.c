#include <stdio.h>

int main(void) {

    int zero = 0;

    int zeros[7]= {1, 2, 3, 4, 5, 6, 7};

    int i = 0;
    while ( i < 7) {
        zeros[i]++;
        printf("%d ", zeros[i]);
    }

    return 0;
}