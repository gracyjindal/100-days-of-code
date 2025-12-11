#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;
        int rightSum = (n * (n + 1) / 2) - (x * (x - 1) / 2);
        if (leftSum == rightSum) {
            printf("Pivot integer = %d", x);
            return 0;
        }
    }
    printf("Pivot integer = -1");
    return 0;