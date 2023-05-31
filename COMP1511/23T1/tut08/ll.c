#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

void print_list(struct node *head) {

    printf("List: ");
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->value);
        curr = curr->next;
    }
    printf("X\n");
}

struct node *new_node(int value, struct node *next) {
    struct node *new = malloc(sizeof(struct node));
    new->value = value;
    new->next = next;
    return new;
}

int main(void) {
    
    struct node *head = new_node(2, NULL);
    head = new_node(3, head);
    head = new_node(1, head);

    print_list(head);
}

