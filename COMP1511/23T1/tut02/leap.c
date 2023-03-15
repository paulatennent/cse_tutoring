// Written by Paula (2023)

#include <stdio.h>

int main(void) {

  printf("Enter a year: ");
  int year;
  scanf("%d", &year);

  if (year % 4 == 0) {

    if (year % 100 == 0) {

      if (year % 400 == 0) {
        printf("Yes a leap year\n");
      } else {
        printf("Not a leap year\n");
      }

    } else {
      printf("Yes a leap year\n");
    }

  } else {
    printf("Not a leap year\n");
  }


  return 0;
}
