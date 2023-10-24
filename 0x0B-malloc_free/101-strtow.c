#include <stdlib.h>
#include <stdio.h>

int is_space(char c) {
    return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char *str) {
    int count = 0;
    int in_word = 0;  // Flag to track if we are inside a word
    while (*str) {
        if (!is_space(*str)) {
            if (!in_word) {
                count++;
                in_word = 1;  // Set the flag
            }
        } else {
            in_word = 0;  // Reset the flag
        }
        str++;
    }
    return count;
}

char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int num_words = count_words(str);
    if (num_words == 0) {
        return NULL;
    }

    char **words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL;
    }

    int word_index = 0;
    int word_length = 0;
    char *word = NULL;

    while (*str) {
        if (!is_space(*str)) {
            if (word == NULL) {
                word = str;  // Start of a new word
            }
            word_length++;
        } else {
            if (word_length > 0) {
                words[word_index] = (char *)malloc(word_length + 1);
                if (words[word_index] == NULL) {
                    // Memory allocation error, clean up and return NULL
                    for (int i = 0; i < word_index; i++) {
                        free(words[i]);
                    }
                    free(words);
                    return NULL;
                }
                strncpy(words[word_index], word, word_length);
                words[word_index][word_length] = '\0';  // Null-terminate the word
                word_index++;
                word = NULL;  // Reset word pointer
                word_length = 0;
            }
        }
        str++;
    }

    // Handle the last word if it exists
    if (word_length > 0) {
        words[word_index] = (char *)malloc(word_length + 1);
        if (words[word_index] == NULL) {
            // Memory allocation error, clean up and return NULL
            for (int i = 0; i <= word_index; i++) {
                free(words[i]);
            }
            free(words);
            return NULL;
        }
        strncpy(words[word_index], word, word_length);
        words[word_index][word_length] = '\0';  // Null-terminate the last word
        word_index++;
    }

    // Set the last element of the array to NULL
    words[word_index] = NULL;

    return words;
}

void free_words(char **words) {
    if (words == NULL) {
        return;
    }

    for (int i = 0; words[i] != NULL; i++) {
        free(words[i]);
    }
    free(words);
}

int main(void) {
    char input[] = "Split this string into words";
    char **word_array = strtow(input);

    if (word_array != NULL) {
        for (int i = 0; word_array[i] != NULL; i++) {
            printf("%s\n", word_array[i]);
        }

        free_words(word_array);
    } else {
        printf("Failed to split the string.\n");
    }

    return 0;
}

