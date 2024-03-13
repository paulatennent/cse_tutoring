#include <stdio.h>

#define MAX 10000

int main(void) {
  // creating strings
  char my_name[MAX] = "Paula";
  //char my_name[] = {'P', 'a', 'u', 'l', 'a', '\0'}; // <- someone who forgot to go to lectures...

  printf("my name is %s\n", my_name);

  printf("my initial is %c\n", my_name[0]);

  my_name[4] = '\0'; // turning my name into Paul (aka, change the 'a' to a '\0')

  printf("my name is %s.\n", my_name);

  my_name[4] = 'i';
  my_name[5] = 'n';
  my_name[6] = 'a';
  my_name[7] = '\0';

  printf("my name is %s.\n", my_name);

  // printing them out

  for (int i = 0; my_name[i] != '\0'; i++) {
    printf("%c", my_name[i]);
  }

  // scanning them in
  // scanf("%s", my_name); // <- WRONG! dont to this, do fgets instead :)
  fgets(my_name, MAX , stdin);

  // editing strings

}
