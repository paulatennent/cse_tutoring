#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    printf("Total arguments: %d\n", argc);

    printf("Argument values:\n");
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %d\n", i, atoi(argv[i]));
    }

    return 0;
}