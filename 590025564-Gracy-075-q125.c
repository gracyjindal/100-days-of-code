#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[200];

    // Get file name from user
    printf("Enter file name: ");
    scanf("%s", filename);
    getchar(); // to consume leftover newline

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }

    // Get line from user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append to file
    fputs(text, fp);

    // Close file
    fclose(fp);

    printf("Text appended successfully.\n");

    return 0;
}
