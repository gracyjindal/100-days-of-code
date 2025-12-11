#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input (includes spaces)

    // Loop through the string until the null terminator
    while (str[i] != '\0') {
        char ch = str[i];

        // Check for vowels (both uppercase and lowercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        // Check for consonants (letters that are not vowels)
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }

        i++;
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}