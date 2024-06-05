#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 100

struct student {
  int zID;
  double wam;
  char name[MAX_NAME_LENGTH];
};

void print_struct(struct student stu);

int main(void) {
    // create the struct
    struct student paula;// = {5255101, 75, "paula"};
    paula.wam = 75;
    paula.zID = 5255101;
    strcpy(paula.name, "paula");

    struct student *ptr = &paula;
    print_struct(paula);


    ptr->wam = 80;

    print_struct(paula);


}

void print_struct(struct student stu) {
    printf("%s with id %d has wam %.2lf.\n", stu.name, stu.zID, stu.wam);
}