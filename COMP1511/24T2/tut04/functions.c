#include <stdio.h>


void print_smiley(void);
int add_one(int number);
int sum(int n1, int n2);
int is_even(int number);

int main(void) {

  // print out a smiley
  print_smiley();

  // create a variable, then add one to it
  int age;
  printf("Age is %d\n", age);
  age = add_one(age);
  printf("Age is %d\n", age);


  // sum two numbers
  int result = sum(2, 3);
  printf("sum is %d", result);

  // check if a number is even
  int number = 3;
  if (is_even(number)) {
    printf("this number is even\n");
  }

  return 0;
}

void print_smiley(void) {
  printf("^_^\n");
}

int add_one(int number) {
  return number + 1;
}

int sum(int n1, int n2) {
  return n1 + n2;
}

int is_even(int number) {
  return number % 2 == 0;
}
>>>>>>> edd371187c712fe6491227181192c8ee6a1fd760
