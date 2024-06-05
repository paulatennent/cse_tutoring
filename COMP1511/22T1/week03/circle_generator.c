#include <stdio.h>
#include <math.h>

int main(void) {
    int radius;
    char is_hollow;

    printf("Please enter a radius: ");
    scanf("%d", &radius);
    printf("Is the circle hollow? ");
    scanf(" %c", &is_hollow);

    int row = -radius;
    while (row <= radius) {
        int col = -radius;
        while (col <= radius) {
            double dist = sqrt(row * row + col * col);
            if (is_hollow == 'n' && dist < radius) {
                printf("* ");
            } else if ((int)dist == radius) {
                printf("# ");
            } else {
                printf(". ");
            }
            col++;
        }
        printf("\n");
        row++;
    }

    return 0;
}