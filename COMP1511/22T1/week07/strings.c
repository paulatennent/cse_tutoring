#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    // === USING char *word ===

    // char *word1 = "hello";
    // printf("word1: %s\n", word1);

    // // we can't change individual chars

    // // word1[0] = 'H'; //this doesn't work

    // // but we can reassign the pointer (just like any
    // // other pointer)

    // char *anotherword = "howdy";
    // word1 = anotherword;
    // printf("word1: %s\n", word1);
    
    // char singlechar = 'h';
    // word1 = &singlechar;
    // printf("word1: %c\n", *word1);

    // // === USING char word[] ===

    // char word2[MAX_LENGTH] = "hello";
    // printf("word2: %s\n", word2);

    // // we can change specific chars
    // word2[0] = 'H';
    // printf("word2: %s\n", word2);

    // // but there is a specific length
    // // word2[6] = 'h'; // this doesn't work as the 
    // // string is of length 5 + 1 (hello + '\0')

    // // we cant reassign pointers to this one, as its just an array
    // // char anotherword2[] = "hi";
    // // word2 = anotherword2; // this also breaks

    // // if we want to assign a different word, we need to use strcpy
    // strcpy(word2, "howdy");
    // printf("word2: %s\n", word2);

    



    char myword[100] = "Paula";
    // myword[0] = 'P';
    // myword[1] = 'a';
    // ...

    // char *word = "Paula";

    strcpy(myword, "Roshan");

 
    printf("%s\n", myword);

    


}