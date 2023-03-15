// Solution by Rishabh Alajpur (2023)
// This program checks the column of a checkerboard

// this is cool since it only uses 1 while loop (not nested while loops).

int did_player_win(char player, char board[SIZE][SIZE]) {
  int win_counter = 0;
  int i = 0;
  int j = 0;
  while (j < SIZE && i < SIZE) {
    if (board[i][j] == player) {
      win_counter = win_counter + 1;
      i++;
    }
    else if (board[i][j] != player) {
      win_counter = 0;
      j++;
      i = 0;
    }
  }
  if (win_counter == 5) {
    return 1;
  }
  else {
    return 0;
  }
}
