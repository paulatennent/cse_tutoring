#include <stdio.h>

#define MAX_LENGTH 10

int main(void) {

    char word[MAX_LENGTH];

    printf("give me a word!");
    fgets(word, MAX_LENGTH, stdin);

    printf("inputted word: %s, thanks!", word);

    printf("give me a word!");
    fgets(word, MAX_LENGTH, stdin);

    printf("inputted word: %s, thanks!", word);

}