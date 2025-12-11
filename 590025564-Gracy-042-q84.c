#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);  // Read input (includes spaces)

    // Convert to uppercase manually
    while (str[i] != '\0') {
        // Check if character is lowercase (between 'a' and 'z')
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert to uppercase by subtracting 32 (ASCII rule)
        }
        i++;
    }

    printf("Uppercase string: %s", str);

    return 0;
}