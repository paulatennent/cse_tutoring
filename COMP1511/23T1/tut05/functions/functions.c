// written by Paula (2023)

#include <stdio.h>

// if we pass in an integer, it doesn't change the variable in main.
void square_broken(int x) {
  x = x * x;
}

// we want to change the variable passed in, we need to return the new value
// (and then assign the return value to the old value back in main).
int square(int x) {
  x = x * x;
  return x;
}

int main(void) {

  int num = 3;

  printf("num starts as : %d\n", num);

  square_broken(num);

  // how could num have been changed if we never wrote `num = something`.
  printf("num after square_broken(num) : %d\n", num);

  // notice how we have to use the value returned from square_fixed to update
  // the value of num.
  num = square(num);

  printf("num after num = square(num) : %d\n", num);

  return 0;
}
