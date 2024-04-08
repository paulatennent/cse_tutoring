// linked_list.c
// This program was written by YOUR-NAME (zID)
// Implementation for simple linked lists functions

#include <stdio.h>
#include <stdlib.h>

#include "linked_lists.h"

// easiest
struct node *create_node(int data) {
  struct node *new_node = malloc(sizeof(node));
  new_node->data = data;
  new_node->next = NULL;
}

// medium
struct node *insert_head(struct node *head, int data) {
  struct node *new_node = malloc(sizeof(node));
  new_node->val = data;

  new_node->next = head;
  head = new_node;


  return head;
}

// hardest
struct node *insert_tail(struct node *head, int data) {
    // TODO
    exit(1);
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

// list length
int list_length(struct node *head) {
    // TODO
    exit(1);
}
