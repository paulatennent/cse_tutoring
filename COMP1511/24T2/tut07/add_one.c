#include <stdio.h>

void add_one(int num);

int main(void) {

  printf("Enter your age: ");
  int age;

  // notice how scanf can change the value of age without a return?
  // it uses the '&', meaning it has the ADDRESS of age
  // given more power, it can go to that address and change the value!
  scanf("%d", &age);

  // lets do the same here
  add_one(&age);

  printf("You will be %d next year.\n", age);
}

void add_one(int num) {
  // the VALUE of num is the ADDRESS of age
  
  // so ... "*num" is like doing "age"
  num = num + 1;
  // age = age + 1;
}
