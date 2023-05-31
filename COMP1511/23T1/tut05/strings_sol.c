#include <stdio.h>
#include <ctype.h>

/////// FUNCTION PROTOTYPES /////

int is_word_char(char c);

// Returns : 1 if `c` is a lowercase letter
//         : 0 otherwise.
int is_lowercase(char c);

// Returns : 1 if `c` is an uppercase letter
//         : 0 otherwise.
int is_uppercase(char c);

// Returns : 1 if `c` is a letter
//         : 0 otherwise.
int is_letter(char c);

// Returns : `c` converted to lowercase, if it was an uppercase letter
//         : `c` unmodified, otherwise
char to_lowercase(char c);

// Returns : `c` converted to uppercase, if it was a lowercase letter
//         : `c` unmodified, otherwise
char to_uppercase(char c);

// Returns : 1 if `c` is an uppercase or lowercase vowel
//         : 0 otherwise.
int is_vowel(char c);

/////////// Functions to implement //////////////

// 1.
// returns the number of lowercase letters in `char *string`
int count_lowercase(char *string) {
  int i = 0;
  int n_lower = 0;
  while (string[i] != '\0') {
    if (is_lowercase(string[i])) {
      n_lower++;
    }
    i++;
  }
  return n_lower;
}
// 2.
// modifies `char *string` by converting all its vowels to uppercase
void make_vowels_uppercase(char *string) {
  for (int i = 0; string[i] != '\0'; i++) {
    if (is_vowel(string[i])) {
      string[i] = to_uppercase(string[i]);
    }
  }
}

// 3..
// shortens a string so that it ends after the first word
// e.g. "This is a sentence" should turn into:
//      "This"
// 
// (hint. what defines when a string ends?)
void delete_following_words(char *string) {
  int i = 0;
  while (string[i] != '\0') {
    if (!is_letter(string[i])) {
      string[i] = '\0';
    }
    i++;
  }
}


int main(void) {

  char s1[] = "Howdy There";
  printf("%d lowercase letters in \"%s\"\n", count_lowercase(s1), s1);

  char s2[] = "spongebob";
  make_vowels_uppercase(s2);
  printf("%s\n", s2);


  char s3[] = "buttery biscuits... apple sauce";
  delete_following_words(s3);
  printf("%s\n", s3);


  return 0;
}

////////// Provided char functions /////////////

// Returns : 1 if `c` is a lowercase letter
//         : 0 otherwise.
int is_lowercase(char c) {

    return 'a' <= c && c <= 'z';
}

// Returns : 1 if `c` is an uppercase letter
//         : 0 otherwise.
int is_uppercase(char c) {

    return 'A' <= c && c <= 'Z';
}

// Returns : 1 if `c` is a letter
//         : 0 otherwise.
int is_letter(char c) {

    return is_lowercase(c) || is_uppercase(c);
}

// Returns : `c` converted to lowercase, if it was an uppercase letter
//         : `c` unmodified, otherwise
char to_lowercase(char c) {
    if (is_uppercase(c)) {
        return c - 'A' + 'a';
    }

    return c;
}

// Returns : `c` converted to uppercase, if it was a lowercase letter
//         : `c` unmodified, otherwise
char to_uppercase(char c) {
    if (is_lowercase(c)) {
        return c - 'a' + 'A';
    }

    return c;
}

// Returns : 1 if `c` is an uppercase or lowercase vowel
//         : 0 otherwise.
int is_vowel(char c) {
    char lower_c = to_lowercase(c);

    return lower_c == 'a' 
        || lower_c == 'e'
        || lower_c == 'i' 
        || lower_c == 'o' 
        || lower_c == 'u';
}
