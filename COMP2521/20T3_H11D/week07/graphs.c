#include <stdio.h>
#include <stdbool.h>


// Linked List Struct
typedef struct node *Node;
struct node {
    int val;
    Node next;
};


// Adjacency Matrix: This version lets you find values using 2 square brackets!
// e.g. graph[3][2] = 1;

// we will have an array of arrays
// so each item in the array holds a pointer, which points to the head of another array!
void adjMatrix1(void) {
    int nodes = 5;

    // creating the array that holds the pointers to other arrays
    int **graph = malloc(sizeof (int *) * nodes);

    // for each item in the first array, create a second array
    for (int i = 0; i < nodes; i++) {
        graph[i] = malloc(sizeof (int) * nodes);
        // initialise all values to be 0
        for (int j = 0; j < nodes; j++) {
            graph[i][j] = 0;
        }
    }

    // example of setting a value
    graph[1][2] = 5;

    // free the graph
    for (int i = 0; i < nodes; i++) {
        free(graph[i]);
    }
    free(graph);
}

// Adjacency Matrix: This version lets you find values using 1 square bracket, but is much easier to create
// e.g. instead of graph[3][2] you do graph[3 * nodes + 2]

// we will have really long array for each square in the Adj Matrix
void adjMatrix2(void) {
    int nodes = 5;

    // create the really long array, nodes^2 long
    int *graph = malloc(sizeof (int) * nodes * nodes);
    // initalise all values to 0
    for (int i = 0; i < nodes * nodes; i++) {
        graph[i] = 0;
    }

    // example of setting a value
    int x = 3;
    int y = 2;

    graph[(x * nodes) + y] = 1;

    // free the graph
    free(graph);
}

// v ====== Helper functions for adjList ======== v
void freeList(Node n) {
    if (n == NULL) return;
    freeList(n->next);
    free(n);
}
// ^ ====== Helper functions for adjList ======== ^

// adjacency list is an array of linked list
void adjList(void) {
    int nodes = 5;

    // first we create the array, note that the type of the item in the array is Node
    // Node is the same as (struct node *)
    // also, since we are creating an array, the type is a pointer to the first item in the array, hence Node *
    Node *graph = malloc(sizeof (int) * nodes);
    for (int i = 0; i < nodes; i++) {
        graph[i] = NULL;
    }

    // example of adding a value:
    // create the node
    Node n = malloc(sizeof (*n));
    n->next = NULL;
    n->val = 4;

    // add it to the start of the list
    n->next = graph[0];
    graph[0]->next = n;

    // free the graph
    for (int i = 0; i < nodes; i++) {
        freeList(graph[i]);
    }
    free(graph);
}

int main(void) {
    

}