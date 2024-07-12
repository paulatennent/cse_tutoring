#include <stdio.h>

void print_smiley(void);
int sum(int num1, int num2);
int add_one(int number);

int main(void) {

    // print out a compllicated ascii smiley

    print_smiley();


    int age = 23;
    age = add_one(age);

    // age = ?????

    printf("age is now: %d\n", age);

    return 0;
}

int add_one(int number) {
    number = number + 1;
    return number;
}

void print_smiley(void) {

    printf("^_^\n");

}
// output ... input
int sum(int num1, int num2) {
    int answer = num1 + num2;
    return answer;
}