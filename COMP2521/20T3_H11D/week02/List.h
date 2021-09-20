#include<stdbool.h>

#ifndef LIST_H
#define LIST_H


typedef struct node {
    int data;
    struct node *next;
} Node;

typedef Node *List;


int length1(List l);
int length2(List l);
int countOdds1(List l);
int countOdd2(List l);
bool isSorted1(List l);
bool isSorted2(List l);
List deleteFirst(List l, int value);
List deleteEvens(List l);

List readList(int, char **);
void showList(List);
void freeList(List);


#endif // LIST_H