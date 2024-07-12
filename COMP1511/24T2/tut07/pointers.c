#include <stdio.h>

int main(void) {
  
  int a = 10;
  // variable name: a
  // type: int
  // value: 10
  // address: 0xaaaa, &a   0x246fa

  printf("the value of a is %d\n", a);
  printf("the address of a is %p\n", &a);

  // type: int *
  // vairable name: address_of_a
  // value: 
  int *address_of_a;
  address_of_a = &a;

  printf("the value of address_of_a is %p\n", address_of_a);
  printf("the address of address_of_a is %p\n", &address_of_a);


  a = 11;
  printf("A is :%d", a);

  *address_of_a = 12;
  printf("A is :%d", a);

  a = 13;
  printf("A is :%d", *address_of_a);
  



}


