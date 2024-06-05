#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct node {
    struct node *next;
    int          data;
};

// return the average of the values in a linked list
double average(struct node *head) {

    int sum = 0;
    double count = 0;
    struct node *curr = head;
    while (curr != NULL) {
        sum = sum + curr->data;
        count++;
        curr = curr->next;
    }
    if (count == 0) {
        return 0;
    } else {
        return sum / count;
    }

}

double average(struct node *head);
struct node *strings_to_list(int len, char *strings[]);

// DO NOT CHANGE THIS MAIN FUNCTION

int main(int argc, char *argv[]) {
    // create linked list from command line arguments
    struct node *head = strings_to_list(argc - 1, &argv[1]);

    double result = average(head);
    printf("%.1lf\n", result);

    return 0;
}


// DO NOT CHANGE THIS FUNCTION

// create linked list from array of strings
struct node *strings_to_list(int len, char *strings[]) {
    struct node *head = NULL;
    for (int i = len - 1; i >= 0; i = i - 1) {
        struct node *n = malloc(sizeof (struct node));
        assert(n != NULL);
        n->next = head;
        n->data = atoi(strings[i]);
        head = n;
    }
    return head;
}
