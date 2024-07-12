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

struct position {
    int row;
    int col;
};

void print_map(struct celestial_body galaxy[SIZE][SIZE]);
void init_galaxy(struct celestial_body galaxy[SIZE][SIZE]);
void place_planets(struct celestial_body galaxy[SIZE][SIZE]);
struct position get_starting_location(struct celestial_body galaxy[SIZE][SIZE]);
int in_bounds(struct position p);
int is_empty(struct celestial_body galaxy[SIZE][SIZE], struct position p);
int get_points(struct celestial_body galaxy[SIZE][SIZE]);
int get_points_range(struct celestial_body galaxy[SIZE][SIZE], struct position player, int radius);

int main(void) {
    struct celestial_body galaxy[SIZE][SIZE];

    // TODO: Initialize the galaxy
    init_galaxy(galaxy);

    // TODO: Place the planets and nebulae in the galaxy
    place_planets(galaxy);

    // TODO: Place the player in the galaxy
    struct position player = get_starting_location(galaxy);

    // TODO: Find the total points
    int points = get_points(galaxy);
    printf("Total points in galaxy: %d\n", points);

    points = get_points_range(galaxy, player, 3);
    printf("Points surrounding player with radius 3: %d\n", points);

    return 0;
}

void init_galaxy(struct celestial_body galaxy[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            galaxy[i][j].entity = EMPTY;
            galaxy[i][j].points = 0;
        }
    }
}

void place_plantes(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("Enter planets and nebulae:\n");

    char command;
    scanf(" %c", &command);
    while (command != 'q') {
        int row;
        int col;
        if (command == 'p') {
            int points;
            scanf("%d %d %d", &row, &col, &points);
            galaxy[row][col].entity = PLANET;
            galaxy[row][col].points = points;
        } else if (command == 'n') {
            scanf("%d %d", &row, &col);
            galaxy[row][col].entity = NEBULA;
            galaxy[row][col].points = NEBULA_POINTS;
        }
        scanf(" %c", &command);
    }
}
            
struct position get_starting_location(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("Enter the starting position of the player: ");
    struct position curr;
    scanf("%d, %d", &curr.row, &curr.col);
    while (!(in_bounds(curr) && is_empty(galaxy, curr))) {
        printf("Invalid position, try again:");
        scanf("%d, %d", &curr.row, &curr.col);
    }
    return curr;
}

int get_points(struct celestial_body galaxy[SIZE][SIZE]) {
    int points = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            points += galaxy[i][j].points;
        }
    }
    return points;
}

int get_points_range(struct celestial_body galaxy[SIZE][SIZE], struct position player, int radius) {
    int points = 0;
    for (int i = player.row - radius; i < player.row + radius; i++) {
        for (int j = player.col - radius; j < player.col + radius; j++) {
            struct position curr = {.row = i, .col = j};
            if (in_bounds(curr)) {
                points += galaxy[i][j].points;
            }
        }
    }
    return points;
}
    

int in_bounds(struct position p) {
    return (p.row >= 0 && p.row < SIZE && p.col >= 0 && p.col < SIZE);
}


int is_empty(struct celestial_body galaxy[SIZE][SIZE], struct position p) {
    return galaxy[p.row][p.col].entity == EMPTY;
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
