// written by Paula (2023)

#include <stdio.h>

int square(int x) {
  return x * x;
}


int main(void) {

  int num = 3;

  printf("num starts as : %d\n", num);

  num = square(num);

  printf("num after square(num) : %d\n", num);

  return 0;
}
