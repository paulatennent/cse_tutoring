#include <stdio.h>
#include <stdlib.h>

enum plant_type {
  OUTDOOR,
  INDOOR,
  FLOWER,
  HERB,
};

struct plant {
  enum plant_type type;
  char *name;
  int age;
};

// Return the oldest plant type
enum plant_type type_of_oldest_plant(int size, struct plant plants[size]) {
    int i = 1;
    int oldest = plants[0].age;
    enum plant_type type = plants[0].type;
    while (i < size) {
        if (plants[i].age > oldest) {
            oldest = plants[i].age;
            type = plants[i].type;
        }
        i++;
    }
    return type;
  // todo - implement this function
}

// This is a simple main function which could be used
// to test your type_of_oldest_plant function.
// It will not be marked.
// Only your type_of_oldest_plant function will be marked.
#define TEST_ARRAY_SIZE 3

int main(void) {
  struct plant test_array[TEST_ARRAY_SIZE] = {
      {.type = OUTDOOR, .name = "Peace Lily", .age = 3},
      {.type = INDOOR, .name = "Cactus", .age = 5},
      {.type = FLOWER, .name = "Rose", .age = 1},
  };
  enum plant_type type = type_of_oldest_plant(TEST_ARRAY_SIZE, test_array);

  if (type == OUTDOOR) {
    printf("The oldest plant is an outdoor plant.\n");
  } else if (type == INDOOR) {
    printf("The oldest plant is an indoor plant.\n");
  } else if (type == FLOWER) {
    printf("The oldest plant is a flower.\n");
  } else {
    printf("The oldest plant is a herb.\n");
  }

  return 0;
}