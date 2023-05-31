// written by Paula (2023)

#include <stdio.h>

#define SIZE 5

#define TRUE 1
#define FALSE 0

// Function Prototype
int did_player_win(char player, char board[SIZE][SIZE]);

int main(void) {
    char no_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {'X', ' ', ' ', ' ', 'O'},
    };

    char x_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {' ', 'X', ' ', ' ', 'O'},
    };
    char o_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'O', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', ' ', 'O', 'O', 'O'},
        {'X', 'X', ' ', ' ', 'O'},
    };

    if (did_player_win('X', o_wins_board)) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', o_wins_board)) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }
}

// checking rows
int check_rows(char player, char board[SIZE][SIZE]) {
    int row = 0;
    while (row < SIZE) {

        // we assume this row is a winning row
        int is_winning = TRUE;
        int col = 0;
        while (col < SIZE) {

            // if we find a contradiction, then set it to be false
            if (board[row][col] != player) {
                is_winning = FALSE;
            }
            col++;
        }

        // if it was never set to false, then we found a winning row!
        if (is_winning) {
            return TRUE;
        }
        row++;
    }

    // if no row returned by now, all were false;
    return FALSE;
}

// checking columns, alternative solution to rows.
int check_cols(char player, char board[SIZE][SIZE]) {
    int col = 0;
    while (col < SIZE) {

        // lets count the number of 'player' pieces there are in this col
        int n_player = 0;
        int row = 0;
        while (row < SIZE) {

            if (board[row][col] == player) {
                n_player++;
            }
            row++;
        }

        // if we find SIZE, then they must all be 'player' pieces
        if (n_player == SIZE) {
            return TRUE;
        }
        col++;
    }

    return FALSE;
}

// checking both diagonals.
int check_diagonals(char player, char board[SIZE][SIZE]) {
    int left_dia = 0;
    int right_dia = 0;
    for (int i = 0; i < SIZE; i++) {
        if (board[i][i] == player) {
            left_dia++;
        }
        if (board[i][SIZE - i - 1] == player) {
            right_dia++;
        }
    }
    if (left_dia == SIZE || right_dia == SIZE) {
        return TRUE;
    }
    return FALSE;
}

// Function Implementation:
// Determines whether a given player has won the game of tictactoe
// by getting SIZE tokens in a row, in any direction.
int did_player_win(char player, char board[SIZE][SIZE]) {

    if (check_rows(player, board) ||
        check_cols(player, board) ||
        check_diagonals(player, board)
        ) {
        return TRUE;
    }
    return FALSE;
}
