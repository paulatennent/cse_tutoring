#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int value;
	struct node *next;
} Node;

typedef Node *List; // pointer to first node


int sumList(List l);
List addToList(List l, int value);
void printList(List l);

int main(void) {
    printf("Hello :)\n");
    List l = NULL;
    l = addToList(l, 1);
    l = addToList(l, 2);
    l = addToList(l, 3);
    printList(l);

    printList(l);
    return 0;
}

int sumList(List l) {
    List curr = l;
    int sum = 0;
    while (curr != NULL) {
        sum += curr->value;
        curr = curr->next;
    }
    printf("%d", sum);
}

int sumList2(List l) {
    if (l == NULL) return 0;
    return l->value + sumList2(l->next);
}


// LIST FUNCTIONS //

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