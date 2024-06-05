#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include <string.h>
#define MAX 257

void parse(char word[MAX]) {
    word[strlen(word) - 1] = '\0';
}

char to_lower(char letter) {
    if ('A' <= letter && letter <= 'Z') {
        return letter + ('a' - 'A');
    }
    return letter;
}

int main() {
    printf("Enter the base line:\n");
    char base[MAX];
    fgets(base, MAX, stdin);
    parse(base);

    int len = strlen(base);

    printf("Enter the test lines:\n");
    char test[MAX];
    char least[MAX];
    int min_diff = len + 1;
    int i = 0;
    while(i < 2) {
        fgets(test, MAX, stdin);
        parse(test);
        int j = 0;
        int diff = 0;
        while (j < len) {
            if (to_lower(test[j]) != to_lower(base[j])) {
                diff++;
            }
            j++;
        }
        if (diff < min_diff) {
            min_diff = diff;
            strcpy(least, test);
        }
        i++;
    }
    // TODO: Read in the test lines

    printf("%d %s\n", min_diff, least);
}
