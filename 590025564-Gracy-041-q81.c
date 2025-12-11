#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input including spaces

    // Count characters manually until the null terminator '\0'
    while (str[count] != '\0') {
        count++;
    }

    // Subtract 1 if you used fgets() (it adds a newline '\n' before '\0')
    if (count > 0 && str[count - 1] == '\n') {
        count--;
    }

    printf("Number of characters: %d\n", count);

    return 0;
}