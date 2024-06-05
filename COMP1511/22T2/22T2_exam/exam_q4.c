#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

// Do not change these #defines, or your program will fail the autotests!
#define EMPTY_LIST -42

struct node {
    struct node *next;
    int          data;
};

// delete_smallest should find the (first) node with the smallest value,
// and remove that node from the list.
//
// delete_smallest should return the head of the new list.
struct node *delete_smallest(struct node *head) {
    if (head == NULL) {
        return NULL;
    }

    struct node *smallest = head;
    struct node *smallest_prev = NULL;
    struct node *curr = head->next;
    struct node *prev = head;
    while (curr != NULL) {
        if (curr->data < smallest->data) {
            smallest = curr;
            smallest_prev = prev;
        }
        prev = curr;
        curr = curr->next;
    }

    if (smallest_prev == NULL) {
        head = smallest->next;
    } else {
        smallest_prev->next = smallest->next;
    }

    free(smallest);
    return head;
}


// If you want, you can write this function to use for debugging.
// It gets called in the main function below.
// If you don't want to write this function, you can just run the
// autotests (which have their own print_list function).
static void print_list(struct node *head) {
    printf("TODO: write code here to print the list "
           "(or just run the autotest)\n");
}

////////////////////////////////////////////////////////////////////////
//               DO NOT CHANGE THE CODE BELOW                         //
////////////////////////////////////////////////////////////////////////

struct node *delete_smallest(struct node *head);
struct node *read_list(void);
static void print_list(struct node *head);

// DO NOT CHANGE THIS MAIN FUNCTION
int main(int argc, char *argv[]) {
    // create linked list from command line arguments
    struct node *head = read_list();

    // If you're getting an error here,
    // you have returned an uninitialized value
    struct node *new_head = delete_smallest(head);
    printf("The new list is: ");
    print_list(new_head);

    return 0;
}

// DO NOT CHANGE THIS FUNCTION
// create linked list from standard input
struct node *read_list(void) {
    struct node *head = NULL;
    struct node *tail = NULL; // <-- add this line
    int num;
    while (scanf("%d", &num) == 1) {
        struct node *n = malloc(sizeof (struct node));
        n->data = num;
        n->next = NULL;
        if (head == NULL) {
            head = n;
            tail = n; // <-- this one too
        } else {
            tail->next = n;
        }
        tail = n;
    }
    return head;
}
