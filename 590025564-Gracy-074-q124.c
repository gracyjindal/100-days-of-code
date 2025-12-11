#include <stdio.h>

int main() {
    FILE *src, *dest;
    char sourceFile[100], destFile[100];
    int ch;

    // Get filenames from user
    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    // Open source file
    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }

    // Open destination file
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Cannot open destination file.\n");
        fclose(src);
        return 1;
    }

    // Copy character by character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    // Close files
    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destFile);

    return 0;
}
