#include <stdio.h>
#include <string.h>

int is_exist(char** words, int row_word, char* word) {
    int i = 0;
    for (; i < row_word; i++) {
        if (strcmp(words[i], word) == 0) {
            return 1;
        }
    }
    return 0;
}

void substr(char* sub, char* str, int start, int length) {
    memcpy(sub, &str[start], length);
    sub[length] = '\0';
}

void solve_riddle(char** words, int row_word, char** str, int row_str) {
    int i = 0;
    // Row...
    for (; i < row_str; i++) {
        int j = 0;
        for (; str[j-1] != '\0'; j++) {
            char cur_word[j+1];
            substr(cur_word, str[i], 0, j);
            if (is_exist(words, row_word, cur_word) == 1) {
                printf("(%d, 1) -> (%d, %d) %s\n", i + 1, i + 1, j, cur_word);
            }
        }
    }

    // Column...
    // Focus line...
}

int main() {
    char *words[4] = {"this", "two", "fat", "that"};
    char *str[4] = {"this", "wats", "oahg", "twot"};
    solve_riddle(words, 4, str, 4);
    return 0;
}
