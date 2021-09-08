#include <stdio.h>
#include <stdlib.h>

// LIST STRUCT
struct node {
    int value;
    struct node *next;
};

struct list {
    struct node *head;
};

void listDelete(struct list *l, int value);
void listDelete2 (struct list *l, int value);
struct node *listDeleteRec(struct node *curr, int value);
void addToList(struct list *l, int value);
void printList(struct list *l);
struct list *newList();

int main(void) {
  printf("Hello :)\n");
  struct list *l = newList();
  addToList(l, 1);
  addToList(l, 2);
  addToList(l, 3);
  printList(l);
  listDelete2(l, 1);
  printList(l);
  return 0;
}


// deletes the first instance of the list
void listDelete(struct list *l, int value) {
  // if the list is empty
  if (l->head == NULL) {
    return;
  }
  
  // what if the list is at the start of the list
  if (l->head->value == value) {
    struct node *temp = l->head;
    l->head = l->head->next;
    free(temp);
  
  } else {
    struct node *curr = l->head;
    while (curr->next != NULL) {
      if (curr->next->value == value) {
        struct node *temp = curr->next;
        curr->next = curr->next->next;
        free(temp);
        break;
      }
      curr = curr->next;
    }
  }
}

// deletes the first instance of a number in a list;
void listDelete2 (struct list *l, int value) {
  l->head = listDeleteRec(l->head, value);
}

struct node *listDeleteRec(struct node *curr, int value) {
  // base case:
  if (curr == NULL) {
    return NULL;
  }

  if (curr->value == value) {
    return curr->next;
  }

  curr->next = listDeleteRec(curr->next, value);
  return curr;
}

// LIST FUNCTIONS

struct list *newList() {
    struct list *l = malloc(sizeof (struct list));
    l->head = NULL;
    return l;
}

// adds a number to the end of a list
void addToList(struct list *l, int value) {
  struct node *add = malloc(sizeof(struct node));
  add->value = value;
  add->next= NULL;

  struct node *curr = l->head;
  
  if (l->head == NULL) {
    l->head = add;
    return;
  }

  while (curr->next != NULL) {
    curr = curr->next;
  }
  curr->next = add;
}

// prints out a list
void printList(struct list *l) {
  struct node *curr = l->head;
  while (curr != NULL) {
    printf("%d ", curr->value);
    curr = curr->next;
  }
  printf("\n");
}