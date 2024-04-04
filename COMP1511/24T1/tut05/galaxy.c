// part1_galaxy.c
//
// This program was written by YOUR-NAME (ZID)
// on DATE
//
// This program is a simple game that allows the user to build a galaxy. 
// The user can place stars, planets, and nebulae in the galaxy.

#include <stdio.h>

#define SIZE 5
#define NEBULA_POINTS -10

enum entity {
    STAR,
    PLANET,
    NEBULA,
    SPACESHIP,
    EMPTY,
};

struct celestial_body {
    enum entity entity;
    int points;
};

int valid_player_start_pos(int row, int row);
void print_map(struct celestial_body galaxy[SIZE][SIZE]);

int valid_pos(int row, int col) {
  return (row == 0 || row == MAX - 1 ||
          col == 0 || col == MAX-1);
}


int main(void) {
    struct celestial_body galaxy[SIZE][SIZE];

    // TODO: Initialize the galaxy

    // TODO: Place the player in the galaxy
    printf("Enter the starting position of the player: ");

    int row;
    int col;
    scanf("%d %d", &row, &col);

    // loop unitll its correct.....
    // on the outskirts of the 2D array
    // !(valid)
    //while (row > 0 && row < MAX )
    //while (row != 0 && row != MAX - 1)

    while (row == 0 || row == MAX - 1 ||
           col == 0 || col == MAX-1)

    while (!(valid_pos(..., ...))) {
      printf("invald positioN!");
      scanf("%d %d", &row, &col);
    }

    // we know that row and col is a valid position


    galaxy[row][col];

    // TODO: Place the planets and nebulae in the galaxy
    printf("How many planets and nebulae are there? ");

    // TODO: Place the planets and nebulae in the galaxy
    printf("Enter the position and points of the planet(s) and nebula(e): ");

    // TODO: Place the stars in the galaxy
    printf("Enter the position and points of the star(s): \n");

    // TODO: Print the map
}

// Function prints the map of the galaxy
// 
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void print_map(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("\n---------------------\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("|");
            if (galaxy[i][j].entity == SPACESHIP) {
                printf(" X ");
            } else if (galaxy[i][j].entity == EMPTY) {
                printf("   ");
            } else if (galaxy[i][j].entity == STAR) {
                printf(" * ");
            } else if (galaxy[i][j].entity == PLANET) {
                printf(" o ");
            } else if (galaxy[i][j].entity == NEBULA) {
                printf(" # ");
            }
        }
        printf("|\n");
        printf("---------------------\n");
    }
}
