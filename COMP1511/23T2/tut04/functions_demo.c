// Written by Paula Tennent (2023)

#include <stdio.h>


int add_one(int num) {
    num = num + 1;
    return num;
}


// notice how this function doesn't update i?

// `i` and `num` are DIFFERENT varibles, so when you update `num`, `i` doens't
// get updated. We have to have `i = ...` somewhere in our code to update `i`.
void add_one_broken(int num) {
    num = num + 1;
}

int main(void) {

    int i = 3;
    add_one_broken(i);
    printf("num is: %d\n", i);
    i = add_one(i);
    printf("num is: %d\n", i);

}
