#include <stdio.h>


int main(void) {

  int a = 5;

  // what is the type? int
  // what is the variable name? a
  // what is the value? 5
  // what is the address? &a -> 0x26fa51

  printf("the value of a is: %d\n", a);
  printf("the address of a is: %p\n", &a);

  int *b;


  // type : int *
  // name: b
  // valye: 0x6264727f6w5d


  printf("the value of b is: %p\n", b);
  printf("the address of b is: %p\n", &b);


  printf("the value of a is: %d\n", *b);



  return 0;
}
