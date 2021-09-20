// written by Paula Tennent (2021)
// linked lists
// COMP2521 21T3 W1 Tut (linked lists - q3)

#include <stdio.h>
#include <stdlib.h>

// LIST STRUCT // 
struct node {
    int value;
    struct node *next;
};

struct list {
    struct node *head;
};

// FUNCTION PROTOTYPES //
void listDelete1(struct list *l, int value);
void listDelete2 (struct list *l, int value);
struct node *listDeleteRec(struct node *curr, int value);
void addToList(struct list *l, int value);
void printList(struct list *l);
struct list *newList();

int main(void) {
    printf("Hello H11D! :3\n");
    
    struct list *l = newList();
    addToList(l, 1);
    addToList(l, 2);
    addToList(l, 3);

    printList(l);
    listDelete2(l, 1);
    printList(l);
    return 0;
}

// ITERATIVE SOLUTION //
// deletes the first instance of the list
void listDelete1(struct list *l, int value) {

    
    // if the list is empty
    if (l->head == NULL) {
        return;
    }
  
    // what if the value is at the start of the list
    if (l->head->value == value) {
        struct node *temp = l->head;
        l->head = l->head->next;
        free(temp);
  
    // if the value is somewhere inside the list
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

// RECURSIE SOLUTION //
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
        struct node *temp = curr->next;
        free(curr);
        return temp;
    }

    curr->next = listDeleteRec(curr->next, value);
    return curr;
}

// LIST HELPER FUNCTIONS //
// creates a new list
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
        urr = curr->next;
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