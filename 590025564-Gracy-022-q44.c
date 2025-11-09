#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        float term = (float)(2 * i - 1) / (2 * i);
        sum += term;
    }

    printf("Sum of the series = %.4f\n", sum);

    return 0;
}
