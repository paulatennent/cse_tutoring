// A simple program to demonstrates how coding with linked lists compares to
// drawing diagrams with linked lists.


#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

int main(void) {

    // 1. creating a POINTER -> a bit like writing a label that points to a node
    // or NULL
    struct node *head = NULL;

    // 2. malloc-ing a NODE -> this is a bit like drawing a circle
    head = malloc(sizeof(struct node));

    // 3. setting the value -> a bit like writing a number inside of the circle
    // for that node
    head->value = 2;

    // 4. setting the next value -> a bit like deciding "where does the arrow
    // coming out of this node point?"
    head->next = NULL;

    struct node *curr = NULL;
    // 5. setting the value of a pointer -> this is like getting a label (from
    // step 1) and pointing it at something else. Here it points at the node
    // that head is pointing to. They are now pointing to the same node.
    curr = head; 


    ////////////////////////////////////////////////////////////////////////////

    // most things will fit into the above 5 categories, lets have a look at
    // some more examples:
    struct node *new = malloc(sizeof(struct node)); // 1 and 2
    new->value = 4; // 3
    new->next = head; // 4
    head = new; // 5

    // check your diagram, did you just add a new node to the front of your
    // list, so now we have a list that looks like: [4 -> 2 -> X]


    // Remember if you are past week 8, we should be freeing our nodes, you can
    // ignore this for now if not
    free(head->next);
    free(head);
}
