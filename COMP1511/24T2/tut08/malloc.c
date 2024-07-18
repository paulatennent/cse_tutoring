#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

int main(void) {
  // integer
  
  int *i = malloc(sizeof(int));
  *i = 5;
  printf("int is: %d\n", *i);
  free(i);

  // double
  
  double *d = malloc(sizeof(double));
  *d = 3.4;
  printf("double is: %lf\n", *d);
  free(d);

  // struct

  struct node *new_node = malloc(sizeof(struct node));
  new_node->value = 5;
  new_node->next = NULL;
  printf("node value is: %d\n", new_node->value);
  free(new_node);

  // array of ints

  int *array = malloc(sizeof(int) * 3);
  array[0] = 1;
  array[1] = 10;
  array[2] = 100;
  printf("Array values are: %d %d %d\n", array[0], array[1], array[2]);

  // array of structs
  
  struct node *nodes = malloc(sizeof(*nodes) * 3);
  nodes[0].value = 4;
  nodes[0].next = NULL;
  // ... etc.. 
  printf("value of first node is: %d", nodes[0].value);
  free(nodes);

}
