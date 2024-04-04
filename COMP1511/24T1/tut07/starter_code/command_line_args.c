#include <stdio.h>

int main(int argc, char *argv[]) {
  // argument vector
  // argument count

  int i = 0;
  while (i < argc) {

    printf("argument %d: %s\n", i, argv[i]);

    i++;
  }

  return 0;
}

/*/

1. Check that there are 3 command line arguments

c program that

./program 1 2 3
./program hello 1511 class
./program hello there
Please input 3 command line arguments


2. Print "Hello World",
but if the "-c" flag exists, print HELLO WORLD

./program
Hello World
./program -c
HELLO WORLD


3. Prints "Hello World", but now we have
-c for caps
-n [number] for the number of "hello world"s printed out

(challenge: make it work for any order of flags!)


 */
