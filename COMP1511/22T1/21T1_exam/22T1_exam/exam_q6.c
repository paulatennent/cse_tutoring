#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

#define MAX_LEN 4096

struct card {
    int num;
    struct card *next;
};

struct card *deck_read(int player_num); // <-- change arguments here to be correct

void print_ll(struct card *head);
struct card *concat(struct card *first, struct card *second);

int main(void) {
    struct card *player1 = deck_read(1);
    struct card *player2 = deck_read(2);

    // TODO: Fill in your code here!
    int player = 1;
    struct card *pile = NULL;
    while (player1 != NULL && player2 != NULL) {

        // take card of stack
        struct card *curr = NULL;
        if (player == 1) {
            curr = player1;
            player1 = player1->next;
        } else {
            curr = player2;
            player2 = player2->next;
        }

        // add card onto empty stack
        curr->next = pile;
        pile = curr;
        if (pile->next != NULL) {
            // if there is a snap
            if (pile->num == pile->next->num) {
                printf("Snap! Matched card %d\n", pile->num);
            
                // add to the end of players cards
                if (player == 1) {
                    player1 = concat(player1, pile);
                } else {
                    player2 = concat(player2, pile);
                }
                pile = NULL;
            }
        } 
        print_ll(player1);
        print_ll(player2);
        print_ll(pile);
        printf("\n");

        if (player == 1) {
            player = 2;
        } else {
            player = 1;
        }
    }

    if (player1 == NULL) {
        printf("Player 2 has won!");
    } else {
        printf("Player 1 has won!");
    }

    return 0;
}


// concat two linked lists
struct card *concat(struct card *first, struct card *second) {
    if (first == NULL) {
        return second;
    }

    struct card *curr = first;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = second;
    return first;
}

void print_ll(struct card *head) {
    
    struct card *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->num);
        curr = curr->next;
    }
    printf("X\n");
}

// Function to create a deck for the specified player.
// Returns a pointer to the top card in the deck.
struct card *deck_read(int player_num) {
    int num;
    printf("Enter Player %d's deck values:\n", player_num); // <-- replace \ with '
    struct card *head = NULL;
    struct card *tail = NULL;
    while (scanf("%d", &num) == 1) {
        if (num == -1) break;
        struct card *new_card = malloc(sizeof(struct card));
        new_card->num = num;
        new_card->next = NULL;
        if (head == NULL) {
            head = tail = new_card;
        } else {
            tail = tail->next = new_card;
        }
    }
    return head;
}
