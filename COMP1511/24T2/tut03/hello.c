#include <stdio.h>

int main(void) {

  int num_l;
  printf("Enter the number of 'l's: ");
  scanf("%d", &num_l);

  int num_hello;
  printf("Enter the number of hellos" );
  scanf("%d", &num_hello);


  int i = 0;
  while (i < num_hello) {


    printf("");

    int j = 0;
    while (j < num_l) {

      if (i == j) {
        printf("*");
      } else {
        printf("_");
      }



      j++;
    }

    printf("\n");

    i++;
  }



  return 0;
}
