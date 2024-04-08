// linked_lists.c
// Written by YOUR-NAME (YOUR-ZID) on TODAYS-DATE
// Implementation file for simple linked lists functions

#include <stdio.h>
#include <stdlib.h>

#include "linked_lists.h"

struct node *create_node(int data) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;

    return new_node;
}

struct node *insert_head(struct node *head, int data) {
    // Create a new node
    struct node *new_node = create_node(data);
    new_node->next = head;

    return new_node;
}

struct node *insert_tail(struct node *head, int data) {
    // Create a new node
    struct node *new_node = create_node(data);

    // If the linked list is empty, return the new node
    if (head == NULL) {
        return new_node;
    }

    // Traverse the linked list to find the last node
    struct node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    // Insert the new node at the end of the linked list
    current->next = new_node;

    return head;
}

void print_list(struct node *head) {
    // Set current to be the first node in the list
    struct node *current = head;
    
    // Traverse the linked list and print each node 
    // until we reach the end of the list
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("X\n");
}

int list_length(struct node *head) {
    // Initialize the length of the list to 0
    int length = 0;

    // Set current to be the first node in the list
    struct node *current = head;

    // Traverse the linked list and increment the length
    // until we reach the end of the list
    while (current != NULL) {
        length++;
        current = current->next;
    }

    return length;
}

struct node *remove_tail(struct node *head) {

  if (head == NULL) {
    retrun NULL;
  }

  if (head->next == NULL) {
    free(head);
    return NULL;
  }

  // find the second last item
  struct node *curr;

  // get curr to the end of the list (second lst)
  while (curr->next->next != NULL) {
    curr = curr->next;
  }
  // whats true here: (curr->next->next == NULL)

  // curr is the second last item :))))

  // set its next value to null;
  free(curr->next);
  curr->next = NULL


  return head;
}


void free_list(struct node *head) {
  struct node *current = head;
  while (current != NULL) {

    // top slice
    struct node *to_delete = current;

    // code (aka meat)
    current = current->next;

    // bottom slice
    free(to_delete);
  }
}

// sandwich

