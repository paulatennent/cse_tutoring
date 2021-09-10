#include <stdio.h>

int main(int argc, char *argv[]) {
    // argc: the number of command line arguments
    // argv: a list of the command line arguments
    //       an array of (char *)

    printf("argc: %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("%s_", argv[i]);
    }
    printf("\n");

    char ch = getchar();
    printf("char: %c", ch);
}