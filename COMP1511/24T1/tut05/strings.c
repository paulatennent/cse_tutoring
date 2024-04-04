#include <stdio.h>
#include <string.h>

#define MAX 10000

int main(void) {
  // creating strings
  //char my_name[10] = {'p', 'a', 'u', 'l', 'a', '\0'};
  char my_name[10] = "Paula";
  //char my_name[] = "Paula"; // secertly [6]

  char *my_name_forbidden = "Paola";

  // printing them out
  printf("%s\n", my_name);
  printf("%s\n", my_name_forbidden);

  // scanning in strings
  //scanf("%s", my_name);
  fgets(my_name, 10, stdin);

  // editing strings

  my_name[4] = '\0'; // 'l' '\0' '\0'
  printf("%s\n", my_name);

  my_name_forbidden[4] = '\0';
  printf("%s\n", my_name_forbidden);

  printf("The length of my name is: %lu\n", my_strlen(my_name));


  

}

"paula\n"
[]

int my_strlen(char *string) {
  int i = 0;
  while (string[i] != '\0') {
    i++;
  }
  return i;
}
