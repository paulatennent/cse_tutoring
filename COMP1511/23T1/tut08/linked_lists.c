#include <stdio.h>

struct node {
  int value;
  struct node *next; // points to the next idea.
};

// 3 -> 2 -> X
void print_list(struct node *head) {

  // print out the first item:
  /* printf("%d -> ", head->value); */
  /* printf("%d -> ", head->next->value); */
  /* printf("%d -> ", head->next->next->value); // 3rd item */
  /* printf("X\n"); */



  // start somehow?
  struct node *curr = head;
  while (curr != NULL) {

    printf("%d -> ", curr->value);

    curr = curr->next;
  }
  // curr == NULL
  printf("X\n");

}

int main(void) {

  // 1. creating a pointer -> writing a word without a circle around it
  // on our diagram (that points to nodes or NULL);
  struct node *head = NULL;

  // 2. drawing a circle (aka a node);
  // the same as writing mallocing a node.
  head = malloc(sizeof(struct node));

  // 3. putting a value inside of the circle
  // setting a value of the struct
  head->value = 3;

  // 4. where does the arrow point to?
  // it points to NULL (aka nothing is after this node)
  head->next = NULL;

  ////// ADDING A SECOND NODE

  // 1. create a circle
  head->next = malloc(sizeof(struct node));

  // 2. filled in the circle with 2
  struct node *curr = head->next;
  curr->value = 2;

  // the same as:
  head->next->value = 2;


  // remember "head->next" is the second node in the list.
  // "->next" means the value after, so the value after the seocnd
  // value is NULL.

  // 3. the arrow out of the circle points to NULL;
  head->next->next = NULL;

  return 0;
}

