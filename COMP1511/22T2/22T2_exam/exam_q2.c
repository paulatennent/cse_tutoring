#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

struct node {
    struct node *next;
    int          data;
};

int have_smalls(struct node *head1, struct node *head2);
struct node *read_list(void);

// DO NOT CHANGE THIS MAIN FUNCTION
int main(void) {
    // create two linked lists from user input
    struct node *head1 = read_list();
    struct node *head2 = read_list();

    int result = have_smalls(head1, head2);
    printf("%d\n", result);

    return 0;
}

// have_smalls should return 0 if neither list contains even numbers.
// have_smalls should return 1 one list contains even numbers, but the other doesn't.
// have_smalls should return 2 if both lists contain even numbers.
int have_smalls(struct node *head1, struct node *head2) {

    int list1 = 0;
    int list2 = 0;
    struct node *curr = head1;
    while (curr != NULL) {
        if (curr->data < 10) {
            list1 = 1;
        }
        curr = curr->next;
    }
    curr = head2;
    while (curr != NULL) {
        if (curr->data < 10) {
            list2 = 1;
        }
        curr = curr->next;
    }

    if (list1 && list2) {
        return 2;
    } else if (list1 || list2) {
        return 1;
    } else {
        return 0;
    }
}

// DO NOT CHANGE THIS FUNCTION
// create linked list from user input
// NOTE: -1 is NOT part of the final list.
struct node *read_list(void) {
    int num;
    struct node *head = NULL;
    struct node *tail = NULL;
    while (scanf("%d", &num) == 1 && num != -1) {
        struct node *new_node = malloc(sizeof(struct node));
        new_node->data = num;
        new_node->next = NULL;
        if (head == NULL) {
            head = tail = new_node;
        } else {
            tail = tail->next = new_node;
        }
    }
    return head;
}
