#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char line[200];

    // Get filename from user
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try to open file in read mode
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
        return 1;
    }

    // File exists, read and display content
    printf("\nFile content:\n");

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
