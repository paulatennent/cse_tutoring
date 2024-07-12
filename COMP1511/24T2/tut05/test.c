#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int array1[4][3];
  printf("sizeof: %lu", sizeof(array1));

  int (*array2)[4] = malloc(sizeof(int) * 3 * 4);
  printf("sizeof: %lu", sizeof(array1));

  free(array2);

}

