#include <stdio.h>
#include <math.h>

/* int add_one(int number);        /\*  *\/ */
void add_one_array(int array[], int size);
void print_array(int array[], int size);


int main(void) {


  // a function that adds 1 to a number

  /* int age = 22; */
  /* printf("age was: %d\n", age); */
  /* age = add_one(age); */
  /* printf("age is now: %d\n", age); */


  // a function that adds 1 to each item in an array
  int array[10] = {0};
  int size = 10;
  print_array(array, size);
  add_one_array(array, size);
  print_array(array, size);

  return 0;
}

/* int add_one(int number) { */
/*   number = number + 1; */
/*   return number; */
/* } */


void add_one_array(int array[], int size) {
  for (int i = 0; i < size; i++) {
    array[i] = array[i] + 1;
  }
}

void print_array(int array[], int size) {
  printf("[");
  for (int i = 0; i < size - 1; i++) {
    printf("%d, ", array[i]);
  }
  printf("%d", array[size - 1]);
  printf("]\n");
}
