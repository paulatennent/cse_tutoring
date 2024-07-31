#include <stdio.h>

#define SIZE 3

enum player {EMPTY, X, 0};

int main(void) {

  enum player board[SIZE][SIZE];

  init_board(board);

  enum player curr = X;

  while (scanf("%d %d", &row, &col) == 2) {
      board[row][col] = curr;

      if (player_won(curr, board)) {
        printf("Player
      }
  }

}


void init_board(enum piece board) {
  // TODO: Set all values in board to be EMPTY
}
