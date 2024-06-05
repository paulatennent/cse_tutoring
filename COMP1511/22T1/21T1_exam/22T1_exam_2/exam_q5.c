#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_WIDTH        16
#define BUFFER_HEIGHT       5
#define MAX_STRING_LEN      100

// FOREGROUND_COLORS
#define FOREGROUND_BLACK 	  30 	
#define FOREGROUND_RED 	    31 	
#define FOREGROUND_GREEN 	  32 	
#define FOREGROUND_BLUE 	  34 	
#define FOREGROUND_NONE     0

// FOREGROUND COMMANDS
#define COMMAND_SET_FOREGROUND_RED    "set foreground red"
#define COMMAND_SET_FOREGROUND_GREEN  "set foreground green"
#define COMMAND_SET_FOREGROUND_BLUE   "set foreground blue"

struct screen_cell
{
    char character;
    int start_marker;
};


void write_text_to_screen(struct screen_cell screen[BUFFER_HEIGHT][BUFFER_WIDTH], char *text);

// Your write_text_to_screen code here!
void write_text_to_screen(struct screen_cell screen[BUFFER_HEIGHT][BUFFER_WIDTH], char *text)
{
	
}




///////////// PROVIDED CODE ///////////////
// DO NOT MODIFY THESE FUNCTIONS

void init_screen(struct screen_cell screen[BUFFER_HEIGHT][BUFFER_WIDTH], int starting_row, int starting_col);
void print_screen(struct screen_cell screen[BUFFER_HEIGHT][BUFFER_WIDTH]);
void trim_newline(char *string);
// we may use a different main function for marking
// please ensure your evaluate_reverse_polish_notation function is implemented. 
// DO NOT MODIFY THIS MAIN FUNCTION
int main(int argc, char *argv[])
{
	if ( argc < 3 ) {
		fprintf(stderr, "Not enough arguments!\n");
		fprintf(stderr, "Usage ./exam_q5 start_row start_col\n");
		exit(1);
	}
	
    struct screen_cell screen[BUFFER_HEIGHT][BUFFER_WIDTH];
    init_screen(screen, atoi(argv[1]), atoi(argv[2]));
    
    printf("Enter Text: ");
    char text[MAX_STRING_LEN];

    fgets(text, MAX_STRING_LEN, stdin);
    trim_newline(text);

    write_text_to_screen(screen, text);
    

    print_screen(screen);
}

void trim_newline(char *str)
{
    int len = strlen(str);
    if (str[len-1] == '\n') {
        str[len-1] = '\0';
    }
}

void init_screen(struct screen_cell screen[BUFFER_HEIGHT][BUFFER_WIDTH], int starting_row, int starting_col)
{
    for (int row = 0; row < BUFFER_HEIGHT; row++)
    {
        for (int col = 0; col < BUFFER_WIDTH; col++)
        {
            screen[row][col].character = ' ';
            if (row == starting_row && col == starting_col) {
            	screen[row][col].start_marker = 1;
            }
        }
    }
}

void print_screen(struct screen_cell screen[BUFFER_HEIGHT][BUFFER_WIDTH])
{
	printf("\n");
    // top border
    for (int i = 0; i < BUFFER_WIDTH + 2; i++) {
        printf("-");
    }
    printf("\n");

    for (int row = 0; row < BUFFER_HEIGHT; row++)
    {
        // left border
        printf("|");
        for (int col = 0; col < BUFFER_WIDTH; col++)
        {       
            printf("%c", screen[row][col].character);
        }
        // right border
        printf("|");
        printf("\n");
    }

    // bottom border
    for (int i = 0; i < BUFFER_WIDTH + 2; i++) {
        printf("-");
    }
    printf("\n");
}
