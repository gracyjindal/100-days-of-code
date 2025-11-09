#include <stdio.h>

int main() {
    int num, last, first, temp, digits = 0, power = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    int n = num;

    last = n % 10;  // last digit

    // Extract first digit
    while (n >= 10) {
        n /= 10;
        digits++;
        power *= 10;
    }
    first = n;

    // Reconstruct number with swapped digits
    int middle = (num % power) / 10;
    int swapped = last * power + middle * 10 + first;

    printf("Swapped number = %d", swapped);

    return 0;
}
