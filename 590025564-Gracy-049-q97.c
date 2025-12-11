#include <stdio.h>
#include <ctype.h>

int main() {
    char name[200];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first character if it's a letter
    if (isalpha(name[0])) {
        printf("%c", toupper(name[0]));
    }

    // Loop through the string
    for (int i = 1; name[i] != '\0'; i++) {
        // If previous char is space and current is a letter, print initial
        if (name[i - 1] == ' ' && isalpha(name[i])) {
            printf("%c", toupper(name[i]));
        }
    }

    printf("\n");
    return 0;
}
