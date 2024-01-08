#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

struct node *add_to_head(int value, struct node *next);
void print_list(struct node *head);
struct node *arr_to_list(int arr[], int length);
struct node *remove_head(struct node *head);

int main(void) {

  int arr[] = {1, 2, 3, 4, 5};
  struct node *head = arr_to_list(arr, 5);
  print_list(head);

  // remove the head
  //head = remove_head(head);

  remove_all(head);

  print_list(head);

  // free the list

  return 0;
}

// function to remove the head
struct node *remove_head(struct node *head) {
  struct node *to_delete = head;
  head = head->next;
  free(to_delete);
  return head;
}


// function to complete free list
void remove_all(struct node *head) {
  if (head == NULL) {
    return;
  }

  remove_all(head->next);
  free(head);
}



/////////// helper functions ///////////

struct node *add_to_head(int value, struct node *next) {
  struct node *new = malloc(sizeof(struct node));
  new->value = value;
  new->next = next;
  return new;
}

void print_list(struct node *head) {
  struct node *curr = head;
  while (curr != NULL) {
    printf("%d -> ", curr->value);
    curr = curr->next;
  }
  printf("X\n");
}

struct node *arr_to_list(int arr[], int length) {
  struct node *head = NULL;
  for (int i = length - 1; i >= 0; i--) {
    head = add_to_head(arr[i], head);
  }
  return head;
}
