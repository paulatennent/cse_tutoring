#include <stdio.h>
#include <math.h>

void add_one(int number);

int main(void) {

  // a function that adds 1 to a number
  int age = 22;
  printf("age was: %d\n", age);
  add_one(age);
  printf("age is now: %d\n", age);

  return 0;
}

void add_one(int number) {
  number = number + 1;
}
