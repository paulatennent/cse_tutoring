#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *insert_head(struct node *head, int val);
int compare_liast_nodes(struct node* list);



int compare_liast_nodes(struct node* list) {
    if (list == NULL || list->next == NULL) {
        return -1;
    }

    struct node *last_node = list;
    while (last_node->next != NULL) {
        last_node = last_node->next;
    }

    struct node *second_last_node = list;
    while (second_last_node->next != last_node) {
        second_last_node = second_last_node->next;
    }
    
    if (second_last_node->data > last_node->data) {
        return 0;
    } else {
        return 1;
    }
}

struct node *insert_head(struct node *head, int val) {
    struct node *new = malloc(sizeof (struct node));
    new->data = val;
    new->next = head;
    return new;
}

int main(void) {    
    struct node *list = insert_head(NULL, 2);
    list = insert_head(list, 3);
    list = insert_head(list, 2);
    list = insert_head(list, 5);
    list = insert_head(list, 4);



    compare_liast_nodes(list);

    struct node *curr = list;
    while (curr != NULL) {
        printf("%d", curr->data);
        curr = curr->next;
    }

}

