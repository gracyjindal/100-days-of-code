#include <stdio.h>

// Function to find HCF using recursion
int HCF(int a, int b) {
    if (b == 0)
        return a;
    else
        return HCF(b, a % b);
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers only.\n");
        return 0;
    }

    printf("HCF (GCD) of %d and %d is: %d\n", num1, num2, HCF(num1, num2));

    return 0;
}
