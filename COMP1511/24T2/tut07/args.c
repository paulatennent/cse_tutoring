#include <stdio.h>

//       int length, char *strings[]
int main(int argc, char *argv[]) {

    for (int i = 0; i < argc; i++) {
        fputs(argv[i], stdout);
        printf("\n");
    }

    return 0;
}



