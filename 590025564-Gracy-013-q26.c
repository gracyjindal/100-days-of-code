#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    // Input two numbers and operator
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);   // space before %c to skip any newline
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Switch-case to perform operation
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            }
            break;

        case '%':
            // Modulus works with integers only
            if ((int)num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                int modResult = (int)num1 % (int)num2;
                printf("Result: %d\n", modResult);
            }
            break;

        default:
            printf("Invalid operator!\n");
            break;
    }

    return 0;
}
