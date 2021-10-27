#include <stdio.h>


typedef struct node *Node;
struct node {
    int val;
    Node   next;
};

// Q1 : Adjacency Matrix vs adjacency list representation


void adjMatrix1(void) {
    int nodes = 5;
    // creating an adjacency matrix;
    // we want to acces things like "edges[x][y];"

    // first we need to create the first list

    int **edges = malloc(sizeof (int) * nodes);

    // if i wanted an array of ints : int *a;
    // a is just a pointer towards an integer

    // for our 2D array, now i want an array of arrays
    for (int i = 0; i < nodes; i++) {
        int *temparr = malloc(sizeof (int) * nodes);
        edges[i] = temparr;
    }

    edges[1][2] = 5;
    edges[0][2] = 2;

    for (int i = 0; i < nodes; i++) {
        free(edges[i]);
    }
    free(edges);

}


void adjMatrix2(void) {
    int nodes = 5;
    // easier to construct, but harder to use

    // edges[i][j] -> edges[(i * nodes) + j];

    int *edges = malloc(sizeof (int) * nodes * nodes);


    free(edges);


}

void freeList(Node n) {
    if (n == NULL) return;
    freeList(n->next);
    free(n);
}


void adjList(void) {
    int nodes = 5;
    // create out array

    Node *edges = malloc(sizeof (Node) * nodes);

    for (int i = 0; i < nodes; i++) {
        edges[i] = NULL;
    }

    // add something to my list
    Node newNode = malloc(sizeof (Node));
    newNode->val = 10;
    newNode->next = NULL;

    newNode->next = edges[2];
    edges[2] = newNode;

    // free the adj list
    for (int i = 0; i < nodes; i++) {
        // free the whole list!
        freeList(edges[i]);
    }
    free(edges);

}

int main(void) {
    

}