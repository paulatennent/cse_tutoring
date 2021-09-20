// Written by Paula Tennent ;3

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "List.h"



// TUTORIAL FUNCTION //

// iteratively finds the length of a list
int length1(List l) {
    int length = 0;
    for (Node *curr = l; curr != NULL; curr = curr->next) {
        length++;
    }
    return length;
}

// recursively finds the length of a list
int length2(List l) {
    if (l == NULL) return 0;
    return 1 + length2(l->next);
}

// iteratively counds the number of odd numbers in a list
int countOdds1(List l) {
    int count = 0;
    for (Node *curr = l; curr != NULL; curr = curr->next) {
        if (curr->data % 2 == 1) {
            count++;
        }
    }
    return count;
}

// retursively counts the number of odd numbers in a list
int countOdd2(List l) {
    if (l == NULL) return 0;
    return (l->data % 2 == 1) ? 1 + countOdd2(l->next) : countOdd2(l->next);
}

// iteratively returns if a list is sorted or not
bool isSorted1(List l) {
    for (Node *curr = l; curr->next != NULL; curr = curr->next) {
        if (curr->next->data < curr->data) return false;
    }
    return true;
}

// recursively returns if a list is sorted or not
bool isSorted2(List l) {
    if (l->next == NULL) return true;
    return (l->data <= l->next->data);
}

// deletes the first occurance of value from a list
List deleteFirst(List l, int value) {
    if (l == NULL) return NULL;

    if (l->data == value) {
        Node *temp = l->next;
        free(l);
        return temp;
    }

    l->next = deleteFirst(l->next, value);
    return l;
}

// deletes all the even numbers from a list
List deleteEvens(List l) {
    if (l == NULL) return NULL;

    if (l->data % 2 == 0) {
        Node *temp = l->next;
        free(l);
        return deleteEvens(temp);
    }

    l->next = deleteEvens(l->next);
    return l;
}





// OTHER FUNCTIONS //

// creates a new node 
static Node *newNode(int data) {
    Node *node = malloc(sizeof(*node));
    node->data = data;
    node->next = NULL;
    return node;
}

// inserts a node into a list
static List insertIntoList(List list, int data) {
    if (list == NULL) {
        return newNode(data);
    }
    list->next = insertIntoList(list->next, data);
    return list;
}

// creates a list from argc and argv
List readList(int argc, char **argv) {
    List list = NULL;
    for (int i = 1; i < argc; i++) {
        list = insertIntoList(list, atoi(argv[i]));
    }
    return list;
}

// displays a list to stdout
void showList(List list) {
    if (list == NULL) {
        printf("X\n");
    } else {
        printf("%d -> ", list->data);
        showList(list->next);
    }
}

// frees the memory of a list
void freeList(List list) {
    if (list != NULL) {
        freeList(list->next);
        free(list);
    }
}