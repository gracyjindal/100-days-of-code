#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // Store original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;             // Get last digit
        reversed = reversed * 10 + remainder;  // Append digit
        num /= 10;                         // Remove last digit
    }

    // Check if original number equals reversed number
    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}
