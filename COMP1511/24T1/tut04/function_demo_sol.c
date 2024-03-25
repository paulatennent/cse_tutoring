#include <stdio.h>
#include <math.h>

void print_uwu(void);
void print_n_uwu(int n);
int sum(int x, int y);
int add_one(int number);
void print_array(int array[], int size);
void add_one_array(int array[], int size);


int main(void) {


  // a function that prints out something
  print_uwu();
  print_n_uwu(3);

  // a function that sums 2 numbers
  int result = sum(2, 3);
  printf("the sum of 2 and 3 is %d\n", result);

  int a = 3;
  int b = 4;
  result = sum(a, b);
  printf("the sum of %d and %d is %d\n", a, b, result);


  // a function that adds 1 to a number
  int age = 22;
  age = add_one(age);

  // a function that adds 1 to each item in an array
  int array[10] = {0};
  print_array(array, 10);
  add_one_array(array, 10);
  print_array(array, 10);

  return 0;
}

void print_uwu(void) {
  printf("uwu\n");
}

void print_n_uwu(int n) {
  for (int i = 0; i < n; i++) {
    print_uwu();
  }
}

int sum(int x, int y) {
  return x + y;
}

int add_one(int number) {
  number = number + 1;
  return number;
}

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
