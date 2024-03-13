#include <stdio.h>
#include <math.h>

int add_one(int number);
void add_one_incorrect(int number);

int main(void) {


  // a function that adds 1 to a number
  int age = 22;
  printf("age was: %d\n", age);
  add_one_incorrect(age); // this does nothing! 
  age = add_one(age); // correct line! :D
  printf("age is now: %d\n", age);

  return 0;
}

int add_one(int number) {
  number = number + 1;
  return number;
}

void add_one_incorrect(int number) {
  number = number + 1;
}

