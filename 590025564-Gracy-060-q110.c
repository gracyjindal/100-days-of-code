#include <stdio.h>

int main() {
    int n, k;
    printf("Enter n and k: ");
    scanf("%d %d", &n, &k);
    int arr[n];

    printf("Enter array: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Maximum in each window: ");
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (int j = i; j < i + k; j++) {
            if (arr[j] > max)
                max = arr[j];
        }
        printf("%d ", max);
    }
    return 0;
    