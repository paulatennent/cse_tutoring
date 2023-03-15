// Written by Paula (2023)

#include <stdio.h>

void error_a_smaller_b() {
  printf("Error, make sure that the first number is greater than the second\n");
}

void error_b_is_0() {
  printf("Error, make sure that the second number is not 0\n");
}

int main(void) {

  printf("scan in two integers: ");

  //Scan in two integers (a and b).
  int a;
  int b;
  scanf("%d %d", &a, &b);

  //If the first integer is less than the second, print out a short error message
  //using a procedure.
  if (a < b) {
    error_a_smaller_b();
    return 1;
  }

  //If the second integer is 0, print out a different short error message.
  if (b == 0) {
    error_b_is_0();
    return 1;
  }

  //If the first integer is larger than the second, prints a / b and (a * 1.0) /
  //(b * 1.0).
  printf("%d\n", a / b);
  printf("%lf\n", (a * 1.0) / (b * 1.0));

  return 0;

}
