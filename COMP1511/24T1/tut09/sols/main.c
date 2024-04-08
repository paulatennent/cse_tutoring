// main.c
// Written by Sofia De Bellis (z5418801) on March 2024
// Program to test simple linked lists functions

#include <stdio.h>
#include <stdlib.h>

#include "linked_lists.h"

int main(void) {

    // Create a pointer to the head of the linked list
    struct node *head = NULL;

    // Insert a node at the beginning of the linked list
    head = insert_head(head, 10);

    // Insert a node at the beginning of the linked list
    head = insert_head(head, 5);

    // Insert a node at the end of the linked list
    head = insert_tail(head, 15);

    // Insert a node at the end of the linked list
    head = insert_tail(head, 20);

    // Print the linked list
    print_list(head);

    // Calculate and print the length of the linked list
    int length = list_length(head);
    printf("There are %d nodes in the list\n", length);

    // Remove the first node from the linked list
    head = remove_head(head);

    // Print the linked list
    print_list(head);
    
    // Calculate and print the length of the linked list
    int length = list_length(head);
    printf("There are %d nodes in the list\n", length);

    // Remove the last node from the linked list
    head = remove_tail(head);

    // Print the linked list
    print_list(head);

    // Calculate and print the length of the linked list
    int length = list_length(head);
    printf("There are %d nodes in the list\n", length);

    return 0;
}
