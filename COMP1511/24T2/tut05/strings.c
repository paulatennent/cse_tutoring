#include <stdio.h>

int main(void) {

    // create a string
    char my_name[] = "Paula";
    char my_name2[100] = "Paula";
    char my_name3[] = {'P', 'a', 'u', 'l', 'a', '\0'};
    

    // print it out

    printf("%s\n", my_name);
    fputs(my_name, stdout);
    printf("\n");


    // change the string

    my_name[4] = '\0'; // remove the last 'a'
    // my_name = "Paulina" // ILLEGAL
    // my_name[5] = 'y' // ILLEGAL
    my_name2[5] = 'a';
    my_name2[6] = '\0';
    // now my_name2 os "Paulaa"


    // scan in a string

    char greeting[100];
    fgets(greeting, 100, stdin);
    // scanf("%s", greeting); // ILLEGAL -> where did the length go???


    // print out only till the first space

    int i = 0;
    while (greeting[i] != '\0' && greeting[i] != ' ') {
        printf("%c", greeting[i]);
        i++;
    }

    return 0;
}
