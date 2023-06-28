// written by Paula (2023)

#include <stdio.h>

int square(int x) {
  x = x * x;
 return x;
}


int main(void) {

  int num = 0;
  scanf("%d", &num);

  printf("num starts as : %d\n", num);

  num = square(num);

  printf("num after num = square(num) : %d\n", num);

  return 0;
}
