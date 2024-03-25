// 1.
// returns the number of lowercase letters in `char *string`
int count_lowercase(char *string);

// 2.
// modifies `char *string` by converting all its vowels to uppercase
void make_vowels_uppercase(char *string);


// 3.
// shortens a string so that it ends after the first word
// e.g. "This is a sentence" should turn into:
//      "This"
// 
// (hint. what defines when a string ends?)
void delete_following_words(char *string);

// 1.
// returns the number of lowercase letters in `char *string`
int count_lowercase(char *string) {
  int n_lower;
  int i = 0;
  while (string[i] != '\0') {
    if (islower(string[i])) {
      n_lower++;
    }
    i++;
  }
  return n_lower;
}

// 2.
// modifies `char *string` by converting all its vowels to uppercase
void make_vowels_uppercase(char *string) {
  int i = 0;
  while (string[i] != '\0') {
    if (isvowel(string[i])) {
      string[i] = toupper(string[i]);
    }
    i++;
  }
}


// 3.
// shortens a string so that it ends after the first word
// e.g. "This is a sentence" should turn into:
//      "This"
// 
// (hint. what defines when a string ends?)
void delete_following_words(char *string) {
  int i = 0;
  while (string[i] != '\0' || string[i] != ' ') {
    i++;
  }
  string[i] = '\0';
}
