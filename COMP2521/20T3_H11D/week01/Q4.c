#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *a = "ABC";
    a = "DEF";
    //*a = 'a'; <-- this doesnt work :(
    printf("%s\n", a);

    char b[3] = "DEF";
    *b = 'd';
    b[2] = 'e';
    printf("%s\n", b);

    char *c = malloc(sizeof("abc"));
    strcpy(c, "ABC");
    *c = 'a';
    printf("%s\n", c);
}