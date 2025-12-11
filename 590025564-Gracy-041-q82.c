#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read the input string (includes spaces)

    printf("Characters in the string:\n");

    // Loop through the string until we reach the null terminator '\0'
    while (str[i] != '\0') {
        if (str[i] != '\n') {  // Skip newline character added by fgets
            printf("%c\n", str[i]);
        }
        i++;
    }

    return 0;
}