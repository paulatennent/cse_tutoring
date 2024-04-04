#include <stdio.h>
#include <math.h>

void add_one(int *number);

int main(void) {


  int age = 0; // age is 0 here

  printf("type in your age: ");
  scanf("%d", &age);

  // a function that adds 1 to a number
  printf("age was: %d\n", age);

  add_one(&age);

  printf("age is now: %d\n", age);


  // age is 22
  return 0;
}

// we need to fix this function, but in a LATER WEEK!
void add_one(int *number) {
  *number = *number + 1;
}
