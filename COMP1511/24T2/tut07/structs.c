#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book {
    char title[100];
    char author[100];
    int year;
};

void modify_book(struct book *book);

int main(void) {
    struct book curr_reading;

    strcpy(curr_reading.title, "To Kill a Mockingbird");
    strcpy(curr_reading.author, "Harper Lee");
    curr_reading.year = 1960;

    printf("Before modification:\n");
    printf("Title: %s, Author: %s, Year: %d\n", curr_reading.title, curr_reading.author, curr_reading.year);

    modify_book(&curr_reading);

    printf("After modification:\n");
    printf("Title: %s, Author: %s, Year: %d\n", curr_reading.title, curr_reading.author, curr_reading.year);

    return 0;
}

void modify_book(struct book *book) {
    book->year = 1925;
    //book->title = "The Great";
    strcpy(book->title, "The Great Gatsby");
    strcpy(book->author, "F. Scott Fitzgerald");
}
