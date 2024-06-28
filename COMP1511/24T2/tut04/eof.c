#include <stdio.h>

int main(void) {
    
  int val;
  int val2;
  int sr = scanf("%d %d", &val, &val2);

  printf("ret: %d, val : %d, val2: %d", sr, val, val2);
}
