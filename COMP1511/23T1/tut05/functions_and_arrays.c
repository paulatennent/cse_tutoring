// Written by Paula (2023)

#include <stdio.h>

// print out the array
void print_array(int array[], int len) {
  for (int i = 0; i < len; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

// square every element in the array
// don't return anything! but it works!
void square_array(int array[], int len) {
  for (int i = 0; i < len; i++) {
    array[i] = array[i] * array[i];
  }
}

int main(void) {

  int numbers[] = {1, 2, 3};
  int len = 3;

  printf("Array starts as : ");
  print_array(numbers, len);

  square_array(numbers, len);

  // how come the array changed, but we never returned anything?
  printf("Array after square_array(array, len); : ");
  print_array(numbers, len);

  return 0;
}
