#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

#define MIN 1
#define MAX 10
#define TEAMS 4

int main(void) {
  srand(time(NULL));
  char *teams[TEAMS] = {
    "team 1",
    "team 2",
    "team 3",
    "team 4",
  };
  
  for (int i = 0; i < TEAMS; i++) {
    printf("Team %s ", teams[i]);
    fflush(stdout);
    for (int j = 0; j < 3; j++) {
      printf(". ");
      fflush(stdout);
      usleep(500000);
    }
    printf("[[ %d ]]\n", rand() % (MAX + 1 - MIN) + MIN);
  }
}
