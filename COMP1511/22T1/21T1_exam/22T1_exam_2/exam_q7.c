#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Do not change these #defines, or your program will fail the autotests!
#define TRUE 1
#define FALSE 0

#define MAX_REGEX_SIZE 128

// matches should return TRUE if the string `text` matches the
// regular expression `regex`, or FALSE otherwise.
int matches(char *regex, char *text) {
    return FALSE;
}


////////////////////////////////////////////////////////////////////////
//               DO NOT CHANGE THE CODE BELOW                         //
////////////////////////////////////////////////////////////////////////

int scan_regex(char *regex);

// DO NOT CHANGE THIS MAIN FUNCTION
int main(int argc, char *argv[]) {
    // Check that we got the right number of arguments
    if (argc != 2) {
        fprintf(stderr, "Usage: %s text_to_match\n", argv[0]);
        exit(1);
    }

    char *text = argv[1];
    char regex[MAX_REGEX_SIZE];;

    while (scan_regex(regex)) {
        if (matches(regex, text)) {
            printf("MATCH\n");
        } else {
            printf("NO_MATCH\n");
        }
    }

    return 0;
}


// DO NOT CHANGE THIS FUNCTION
// Scans in a line with fgets, and removes the newline character (if
// there was one).
// Returns 1 if it managed to read a line, and 0 otherwise.
int scan_regex(char *regex) {
    if (fgets(regex, MAX_REGEX_SIZE, stdin) == NULL) {
        return 0;
    }

    // If the line from fgets contains a newline, replace it with a '\0'.
    regex[strcspn(regex, "\n")] = '\0';

    return 1;
}
