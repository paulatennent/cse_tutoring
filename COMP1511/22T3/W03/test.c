#include <stdio.h>

int main(void) {

    // get in the range 0 <= num < 6
    int input;
    printf("enter number\n");
    scanf("%d", &input);

    int ans = (input % 6) + 6;
    printf("ans is: %d\n", ans);

}