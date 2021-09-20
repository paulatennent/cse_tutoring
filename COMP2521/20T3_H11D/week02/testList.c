#include <stdio.h>

#include "list.h"

int main(int argc, char **argv) {
    List l = readList(argc, argv);
    printf("Origional List: ");
    showList(l);
    
    deleteFirst(l, 5);

    printf("New List: ");
    showList(l);

    freeList(l);
}