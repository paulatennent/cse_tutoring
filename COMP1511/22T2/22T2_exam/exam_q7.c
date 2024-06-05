// exam_q7.c
//
// This program was written by YOUR-NAME-HERE (z5555555)
// on INSERT-DATE-HERE
//
// One line summary of what this exercise does.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

void find_next(char *pipes, int *next, int length) {
    int i = 0;
    while (i < length) {
        next[i] = false;
        i++;
    }

    i = 0;
    while (i < length) {

        if (pipes[i] == '|') {
            next[i] = true;
        } else if (pipes[i] == '/' && i != 0) {
            pipes[i - 1] = true;
        } else if (pipes[i] == '\\' && i != length - 1) {
            pipes[i + 1] = true;
        }

        i++;
    }
}

void print_line(char input[1000][1000], int row) {
    printf("%s", input[row]);
    input[row][0] = 'x';
}

int n_connected(char *line, int *next, int length, int *straight) {
    int n_connected = 0;
    int i = 0;
    while (i < length) {
        
        if (line[i] == '|' || line[i] == '/'|| line[i] == '\\') {
            if (next[i]) {
                n_connected++;
            } else {
                return -1;
            }
            if (line[i] == '|') {
                *straight++;
            }
        }
        
        i++;
    }
}

bool not_printed(char *line) {
    if (line[0] == 'x') {
        return false;
    }
    return true;
}

int find_best(char input[1000][1000], int *next, int length, int lines) {
    int i = 0;
    int line = -1;
    int max_pipes = 0;
    int max_stright = 0;
    while (i < lines) {
        
        if (not_printed(input[i])) {
            int straight;
            int pipes = n_connected(input[i], next, length, &straight);
            if (pipes > max_pipes) {
                line = i;
                max_pipes = pipes;
                max_stright = straight;
            } else if (pipes == max_pipes && straight > max_stright) {
                line = i;
                max_pipes = pipes;
                max_stright = straight;
            }
        }

        i++;
    }
    return line;
}

int main(void) {

    char input[1000][1000];
    int used[1000];

    int i = 0;
    while (fgets(input[i], 1001, stdin) != NULL) {
        printf("line %d: %s", i, input[i]);
        i++;
    }
    int lines = i;
    int length = strlen(input[0]) - 1;

    print_line(input, 0);

    int next[1000];
    i = 0;
    find_next(input[0], next, length);
    
    i = 1;
    while (i < lines) {
        int to_print = find_best(input, next, length, lines);
        if (to_print == -1) {
            return 0;
        }
        print_line(input, 0);
        find_next(input[to_print], next, length);
        i++;
    }
}
