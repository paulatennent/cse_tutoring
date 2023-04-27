#include <stdio.h>
#include <stdlib.h>

struct node *create_node(int value, struct node *next);
struct node *array_to_list(int array[], int len);
void print_list(struct node *head);
void free_list(struct node *head);
void print_reverse(struct node *head);
struct node *reverse(struct node *head);
void print_reverse2(struct node *head);
void print_reverse_rec(struct node *head);


struct node {
    int value;
    struct node *next;
    struct node *prev; // doubly linked list
};

int main(void) {

    int array[] = {1, 2, 3, 4, 5};
    struct node *head = array_to_list(array, 5);

    //print_list(head);
    print_reverse2(head);
    //print_list(head);
    free_list(head);
}

void print_reverse2(struct node *head) {
    print_reverse_rec(head);
    printf("X\n");
}

// COMP2521 -> recursion
void print_reverse_rec(struct node *head) {
    // recursive solution
    if (head != NULL) {

        print_reverse_rec(head->next);
        printf("%d -> ", head->value);

    }
}
// 1, 2, 3, 4, 5

// 5, 4, 3, 2 .... 1 

// print list in reverse...
void print_reverse(struct node *head) {
    head = reverse(head);
    print_list(head);
    head = reverse(head);
}

struct node *reverse(struct node *head) {

    struct node *previous = NULL;
    struct node *current = head;
    while (current != NULL) {
        struct node *temp = current->next;
        current->next = previous;
        previous = current;
        current = temp;
    }
    return previous;
}



// TODO: write a function that frees the whole list
void free_list(struct node *head) {
    if (head != NULL) {
        free_list(head->next);
        free(head);
    }
}



/////////// HELPER FUNCTIONS /////////////

struct node *create_node(int value, struct node *next) {
    struct node *new = malloc(sizeof(struct node));
    new->value = value;
    new->next = next;
    return new;
}

struct node *array_to_list(int array[], int len) {
    struct node *head = NULL;
    for (int i = len - 1; i >= 0; i--) {
        head = create_node(array[i], head);
    }
    return head;
}

void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->value);
        curr = curr->next;
    }
    printf("X\n");
}
