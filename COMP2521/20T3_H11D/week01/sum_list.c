// written by Paula Tennent (2021)
// linked lists
// COMP2521 21T3 W1 Tut (linked lists - q2)

#include <stdio.h>
#include <stdlib.h>

// a simple linked list struct
typedef struct node {
	int value;
	struct node *next;
} Node;

typedef Node *List; // pointer to first node

// function prototypes
int sumList(List l);
int sumListRec(List l);
List addToList(List l, int value);
void printList(List l);

int main(void) {
    printf("Hello H11D! :3\n");
    List l = NULL;
    l = addToList(l, 1);
    l = addToList(l, 2);
    l = addToList(l, 3);
    printList(l);
    printf("%d\n", sumList(l));
    return 0;
}

int sumList(List l) {
    // loop through all items in the list
    int sum = 0;

    Node *curr = l;
    while (curr != NULL) {
        sum += curr->value;
        // moving to the next value in the list
        curr = curr->next;
    }
    return sum;
}

int sumListRec(List l) {
    // base case:
    if (l == NULL) {
        return 0;
    }

    // recursive case:
    return l->value + sumListRec(l->next);
}


// LIST HELPER FUNCTIONS //

// adds a number to the end of a list
List addToList(List l, int value) {
    struct node *add = malloc(sizeof(struct node));
    add->value = value;
    add->next= NULL;
    if (l == NULL) {
        return add;
    }

    struct node *curr = l;
  
    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = add;
    return l;
}

// prints out a list
void printList(List l) {
    struct node *curr = l;
    while (curr != NULL) {
        printf("%d ", curr->value);
        curr = curr->next;
    }
    printf("\n");
}