#include <stdio.h>

int main(void) {
  
  int a = 10;
  // variable name: a
  // type: int
  // value: 10
  // address: 0xaaaaaa, &a

  // print out the value:
  printf("a is %d\n", a);
  
  // print out the address of a
  printf("address of a is %p\n", &a);

  int *add_of_a = &a;
  // variable name: add_of_a
  // type: int *
  // value: 0xaaaaaa,
  // address: &add_of_a -> 0xbbbbbb

  // print out the value:
  printf("add_of_a is %p\n", add_of_a);
  
  // print out the address of add_of_a
  printf("address of add_of_a is %p\n", &add_of_a);


  a = 11;

  *add_of_a = 12;

  printf("a is %d\n", a);

  printf("a is %d\n", *add_of_a);


}


