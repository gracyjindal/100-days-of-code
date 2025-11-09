#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Using a loop to add odd numbers
    for (int i = 1, count = 0; count < n; i += 2, count++) {
        sum += i;
    }

    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}
