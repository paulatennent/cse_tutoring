#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#define MAX_LEN 100

struct arg_node {
    char data[MAX_LEN];
    struct arg_node *next;
};

struct node {
    int data;
    struct node *next;
};

static struct arg_node *strings_to_list(int len, char *strings[]);
int evaluate_shreys_calculator_notation(struct arg_node *head);
void free_arg_list(struct arg_node *head);


int pop(struct node **head) {
    struct node *delete = *head;
    int val = (*head)->data;
    *head = (*head)->next;
    free(delete);
    return val;
}

struct node *push(struct node *head, int val) {
    struct node *new = malloc(sizeof(*new));
    new->data = val;
    new->next = head;
    return new;
}

// your exam q6 code here!
int evaluate_shreys_calculator_notation(struct arg_node *head) {
    
    struct node *eval_head = NULL;

    struct arg_node *curr = head;
    while (curr != NULL) {
        
        char op = curr->data[0];
        if (op == '+' || op == '-' || op == '/' || op == 'x') {
            
            int b = pop(&eval_head);
            int a = pop(&eval_head);

            int res;
            if (op == '+') {
                res = a + b;
            } else if (op == '-') {
                res = a - b;
            } else if (op == '/') {
                res = a / b;
            } else if (op == 'x') {
                res = a * b;
            }

            eval_head = push(eval_head, res);
        } else {
            eval_head = push(eval_head, atoi(curr->data));
        }

        curr = curr->next;
    }
    
    return eval_head->data;
}


///////////// PROVIDED CODE ///////////////
// DO NOT MODIFY THESE FUNCTIONS

// we may use a different main function for marking
// please ensure your evaluate_shreys_calculator_notation function is implemented. 
// DO NOT MODIFY THIS MAIN FUNCTION
int main(int argc, char *argv[]) {
    int length = argc - 1;
    struct arg_node *head = strings_to_list(length, &argv[1]);

    printf("%d\n", evaluate_shreys_calculator_notation(head));
    free_arg_list(head);

    return 0;
}

// create linked list from array of strings
static struct arg_node *strings_to_list(int len, char *strings[]) {
    struct arg_node *head = NULL;
    for (int i = len - 1; i >= 0; i = i - 1) {
        struct arg_node *n = malloc(sizeof (*n));
        assert(n != NULL);
        n->next = head;
        strcpy(n->data, strings[i]);
        head = n;
    }
    return head;
}

void free_arg_list(struct arg_node *head) {
    if (head == NULL) return;
    free_arg_list(head->next);
    free(head);
}

