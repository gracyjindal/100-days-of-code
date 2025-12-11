#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 0;
    int inWord = 0;

    // Open the file in read mode
    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;  // Count characters

        if (ch == '\n')
            lines++;  // Count lines

        // Check for word boundaries
        if (isspace(ch)) {
            inWord = 0;  // We are no longer inside a word
        } else {
            if (inWord == 0) {
                words++;   // New word begins
                inWord = 1;
            }
        }
    }

    fclose(fp);

    // If file is not empty and does not end with newline, last line still counts
    if (chars > 0 && ch != '\n')
        lines++;

    printf("Total Characters: %d\n", chars);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);

    return 0;
}
