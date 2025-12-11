#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input (includes spaces)

    // Find the length manually
    while (str[length] != '\0') {
        length++;
    }

    // Remove newline character added by fgets()
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    // Check if string is palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;  // Not a palindrome
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}