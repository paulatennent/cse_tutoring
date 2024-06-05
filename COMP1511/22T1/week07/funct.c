// a simple function that counts the number of lowercase
// letters in a string

#include <stdio.h>

#define SIZE 10

int secret_function(char word[SIZE]);


int main(void) {
    printf("val: %d\n", secret_function("Helloooo"));
}

int secret_function(char word[SIZE]) {
    int i = 0;
    int result = 0;
    while (word[i] != '\0') {
        if (word[i] >= 'a' && word[i] <= 'z') {
            result++;
        }
        i++;
    }
    return result;
}