// Written by Paula Tennent (2023)

#include <stdio.h>



int add_one(int num) {
    num = num + 1;
    return num;
}

int main(void) {

    int i = 3;
    i = add_one(i);
    printf("num is: %d", i);

}
