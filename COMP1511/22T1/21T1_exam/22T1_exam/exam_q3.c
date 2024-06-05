#include <stdio.h>

int main(void) {

    int input;
    int seen[1000] = {0};
    while (scanf("%d", &input) == 1) {
        if (seen[input] != 0) {
            printf("%d is repeated\n", input);
            return 0;
        } else {
            seen[input] = 1;
        }
    }
    printf("hi");

    return 0;
}