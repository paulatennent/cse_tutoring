// Written by Paula Tennent ;3

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "List.h"



// TUTORIAL FUNCTION //

// iteratively finds the length of a list
int length1(List l) {

    int length = 0;
    Node *curr = l;
    while (curr != NULL) {
        length++;
        curr = curr->next;
    }

    return length;
}

// recursively finds the length of a list
int length2(List l) {
    //base case
    if (l == NULL) return 0;

    // recursive case
    return 1 + length2(l->next);//rest of the list
}

// iteratively counds the number of odd numbers in a list
int countOdds1(List l) {
    int sum = 0;

    for (Node *curr = l; curr != NULL; curr = curr->next) {
        if (curr->data % 2 == 1) {
            sum++;
        }
    }

    return sum;
}

// retursively counts the number of odd numbers in a list
int countOdd2(List l) {
    //base case
    if (l == NULL) return 0;
    
    // recursive case
    if (l->data % 2 == 1) {
        return 1 + countOdd2(l->next);
    } else {
        return countOdd2(l->next);
    }
}

// iteratively returns if a list is sorted or not
bool isSorted1(List l) {
    
    return true;
}

// recursively returns if a list is sorted or not
bool isSorted2(List l) {
    // base case;
    if (l == NULL || l->next == NULL) return true;

    // recursive case;
    // curr element is <= next element;

    // If we find an occurance of it being not sorted
    if (l->data > l->next->data) {
        return false;
    }

    return inSorted(l->next);
}

// deletes the first occurance of value from a list
List deleteFirst(List l, int value) {
    // base case
    if (l == NULL) return NULL;

    // 1 2 3 4, remove 1
    if (l->data == value) {
        Node *temp = l->next;
        free(l);
        return temp;
    }
    // recursive case
    l->next = deleteFirst(l->next, value); // 3 4
    return l;
}

// deletes all the even numbers from a list
List deleteEvens(List l) {
    // base case;
    if (l == NULL) return NULL;

    // recursive case
    // if the current element is odd, dont remove it
    if (l->data % 2 == 1) {
        l->next = deleteEvens(l->next);
        return l;
    // if the current element is even, remove it!
    } else {
        Node *temp = l->next;
        free(l);
        return deleteEvens(temp);
    }

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