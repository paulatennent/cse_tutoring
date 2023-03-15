// written by Paula (2023)

#include <stdio.h>

// squares the value in a variable.
void square(int *x) {
  *x = *x * *x;
}

int main(void) {

  int num = 3;

  printf("num starts as : %d\n", num);

  square(&num);

  // how could num have been changed if we never wrote `num = something`.
  printf("num after square(&num); : %d\n", num);

  return 0;
}
