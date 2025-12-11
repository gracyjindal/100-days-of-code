#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    if (name[len - 1] == '\n')
        name[len - 1] = '\0';  // Remove newline

    char *token = strtok(name, " ");
    char lastWord[100];

    // Process all words
    while (token != NULL) {
        strcpy(lastWord, token);   // Keep updating; last one becomes surname
        token = strtok(NULL, " ");
    }

    // Now print initials of all except last word
    token = strtok(name, " ");
    while (token != NULL) {
        if (strcmp(token, lastWord) == 0)
            break;  // stop before surname

        printf("%c. ", toupper(token[0]));  // print initial
        token = strtok(NULL, " ");
    }

    // Print surname fully
    printf("%s\n", lastWord);

    return 0;
}
