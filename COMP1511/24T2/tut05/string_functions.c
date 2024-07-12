// 1.
// returns the number of lowercase letters in `char *string`
int count_lowercase(char string[MAX_CHARS]) {
    int count = 0;
    int i = 0;
    while (string[i] != '\0') {
        if (is_lower(strign[i])) {
            count++;
        }
    }
    return count;
}

// 2.
// modifies `char *string` by converting all its vowels to uppercase
void make_vowels_uppercase(char string[MAX_CHARS]) {
    int i = 0;
    while (string[i] != '\0') {
        if (is_vowel(string[i])) {
            string[i] = to_upper(string[i]);
        }
    }
    return;
}

// 3..
// shortens a string so that it ends after the first word
// e.g. "This is a sentence" should turn into:
//      "This"
// 
// (hint. what defines when a string ends?)
void delete_following_words(char string[MAX_CHARS]) {
    int i = 0;
    while (string[i] != '\0' && string[i] != ' ') {
        i++;
    }
    string[i] = '\0';
    return;
}
