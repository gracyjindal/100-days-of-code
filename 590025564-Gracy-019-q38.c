#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;  // Store original number

    // Make sure number is positive
    if (num < 0) {
        num = -num;
    }

    // Calculate sum of digits
    while (num != 0) {
        remainder = num % 10;  // Get last digit
        sum += remainder;       // Add to sum
        num /= 10;              // Remove last digit
    }

    printf("Sum of digits of %d is: %d\n", original, sum);

    return 0;
}
