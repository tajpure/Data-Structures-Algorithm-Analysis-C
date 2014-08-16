#include <stdio.h>

int main() {
    
    char words[4][5] = {"this", "two", "fat", "that"};
    char str[4][5] = {"this", "wats", "oahg", "fgdt"};

    int i = 0;
    int j = 0;
    int m = 0;
    int n = 0;

    while (i < 4) {
        j = 0;
        while (j < 4) {
            if (words[m][n] == str[i][j]) {
               
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
