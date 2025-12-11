#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input (includes spaces)

    // Manually find the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Remove newline character if fgets added one
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    printf("Reversed string: ");
    // Print characters in reverse order
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}