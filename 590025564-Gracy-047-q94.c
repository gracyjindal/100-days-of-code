#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    char longest[200] = "";
    char current[200] = "";
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            current[j++] = str[i];
        } else {
            current[j] = '\0';
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, current);
            }
            j = 0;  // reset for next word
        }
        i++;
    }

    // Check last word
    current[j] = '\0';
    if (j > maxLen) {
        strcpy(longest, current);
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
