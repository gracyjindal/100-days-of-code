#include <stdio.h>

int main() {
    int num, remainder;
    long long product = 1;  // Use long long for large products
    int hasOdd = 0;         // Flag to check if there is at least one odd digit

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;  // Store original number

    // Make number positive
    if (num < 0)
        num = -num;

    // Calculate product of odd digits
    while (num != 0) {
        remainder = num % 10;
        if (remainder % 2 != 0) {  // Check if digit is odd
            product *= remainder;
            hasOdd = 1;
        }
        num /= 10;
    }

    if (hasOdd) {
        printf("Product of odd digits of %d is: %lld\n", original, product);
    } else {
        printf("There are no odd digits in %d.\n", original);
    }

    return 0;
}
