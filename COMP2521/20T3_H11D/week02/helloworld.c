// a useful website for gcc options! https://www.rapidtables.com/code/linux/gcc.html

#include <stdio.h>

int main(void) {
    printf("Hello Everyone!\n");
            
    //this will cause a seg fault! try compiling it with -g and use GDB to find where the seg fault is
    // to run gdb use these commands

    // gcc -g -o helloworld helloworld.c
    // gdb helloworld

    // run (<- this is inside the gdb terminal)
    char *str;
    str = "WOW";
    *(str+1) = 'n';
}